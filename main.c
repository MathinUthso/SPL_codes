#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SQUAD 11
#define MAX 100

  // Struct definitions
struct team {
    char name[MAX];
    int age;
    int runs;
    int wickets;
};

  // User credentials structure
struct {
    char username[MAX];
    char pass[MAX];
} users[MAX];

  // Function prototypes
int user_login(void);
int authenticate(char email[], char password[]);
int team_info(FILE *file, struct team x[]);
void calculate_ratings(struct team x[], int total_rating[]);
void display_team_info(struct team x[], int squad_size);
void update_run(struct team x[]);
void younger_player(struct team team1[], struct team team2[]);
void most_rated_player_team1(struct team team1[]);
void most_rated_player_team2(struct team team2[]);
void man_of_the_match(struct team team1[], struct team team2[]);
int file_check(FILE *file);
void save_team_data(const char *filename, struct team x[]);

  // Global flag for authentication
int flag = 0;

  // Team arrays
struct team team1[SQUAD], team2[SQUAD];

int main(void) {
      // Open login file
    FILE *login_file = fopen("login.txt", "r");
    file_check(login_file);

    char mail[MAX], pass[MAX];

      // Read email and password from login file
    if ((fgets(mail, MAX, login_file)) != NULL) {
        mail[strcspn(mail, "\n")] = '\0';
    }
    if ((fgets(pass, MAX, login_file)) != NULL) {
        pass[strcspn(pass, "\n")] = '\0';
    }

    fclose(login_file);

      // User login
    if(user_login()) {
        if(authenticate(mail, pass)) {
            printf("\n********** Login successful **********\n");
        } else {
            printf("\nInvalid information. Exiting.\n");
            exit(1);
        }
    }

      // Read team1 data
    FILE *teamone = fopen("Team1.txt", "r");
    file_check(teamone);
    team_info(teamone, team1);
    fclose(teamone);

      // Read team2 data
    FILE *teamtwo = fopen("Team2.txt", "r");
    file_check(teamtwo);
    team_info(teamtwo, team2);
    fclose(teamtwo);

      // Menu-driven interface
    int choice;
    while(1) {
        printf("\n===== Cricket Team Management Menu =====\n");
        printf("1. Display Team 1 Information\n");
        printf("2. Display Team 2 Information\n");
        printf("3. Update Player Runs\n");
        printf("4. Find the Youngest Player\n");
        printf("5. Most Rated Player in Team 1\n");
        printf("6. Most Rated Player in Team 2\n");
        printf("7. Man of the Match\n");
        printf("8. Exit\n");
        printf("Please enter your choice: ");
        if(scanf("%d", &choice)!=1){
                // Clear invalid input
            while(getchar() != '\n');
            printf("Invalid input. Please enter a number between 1 and 8.\n");
            continue;
        }
            // Clear input buffer
        while(getchar() != '\n');

        switch(choice) {
            case 1: 
                display_team_info(team1, SQUAD);
                break;
            case 2: 
                display_team_info(team2, SQUAD);
                break;
            case 3: {
                printf("\nWhich team do you want to update runs for?\n1. Team 1\n2. Team 2\nEnter choice: ");
                int team_choice;
                if(scanf("%d", &team_choice)!=1){
                    while(getchar() != '\n');
                    printf("Invalid input.\n");
                    break;
                }
                while(getchar() != '\n');
                if(team_choice ==1){
                    update_run(team1);
                    save_team_data("Team1.txt", team1);
                }
                else if(team_choice ==2){
                    update_run(team2);
                    save_team_data("Team2.txt", team2);
                }
                else{
                    printf("Invalid team choice.\n");
                }
                break;
            }
            case 4: 
                younger_player(team1, team2);
                break;
            case 5: 
                most_rated_player_team1(team1);
                break;
            case 6: 
                most_rated_player_team2(team2);
                break;
            case 7: 
                man_of_the_match(team1, team2);
                break;
            case 8: 
                printf("Thank you! Exiting.\n");
                exit(0);
            default: 
                printf("Invalid choice. Please select between 1-8.\n");
        }
    }

    return 0;
}

  // Function to handle user login input
int user_login(void) {
    printf("Enter your email: ");
    if(fgets(users[0].username, MAX, stdin) == NULL){
        printf("Error reading username.\n");
        return 0;
    }
    users[0].username[strcspn(users[0].username, "\n")] = '\0';

    printf("Enter your password: ");
    if(fgets(users[0].pass, MAX, stdin) == NULL){
        printf("Error reading password.\n");
        return 0;
    }
    users[0].pass[strcspn(users[0].pass, "\n")] = '\0';

    return 1;
}

  // Function to authenticate user credentials
int authenticate(char email[], char password[]) {
    if ((strcmp(email, users[0].username) == 0) && (strcmp(users[0].pass, password) == 0)) {
        flag = 1;
        return flag;
    } else {
        flag = 0;
        return flag;
    }
}

  // Function to read team information from file
int team_info(FILE *file, struct team x[]) {
    int potaka = 0;
    for(int i=0; i<SQUAD; i++) {
        if (fscanf(file, "%s %d %d %d", x[i].name, &x[i].age, &x[i].runs, &x[i].wickets) == 4) {
            potaka = 1;
        } else {
            printf("Error reading data for player %d\n", i+1);
        }
    }
    if(potaka) {
        printf("Team data loaded successfully.\n");
    }
    return 0;
}

  // Function to calculate ratings
void calculate_ratings(struct team x[], int total_rating[]) {
    for(int i=0; i<SQUAD; i++) {
        total_rating[i]  = 0;                 // Initialize
        total_rating[i] += x[i].wickets * 8;
        if(x[i].runs > 75)
            total_rating[i] += 24;
        else if(x[i].runs > 50 && x[i].runs <= 75)
            total_rating[i] += 20;
        else if(x[i].runs >= 20 && x[i].runs <= 50)
            total_rating[i] += 12;
        else if(x[i].runs < 20)
            total_rating[i] += 4;
    }
}

  // Function to display team information
void display_team_info(struct team x[], int squad_size) {
    printf("\n===== Team Information =====\n");
    printf("Name\tAge\tRuns\tWickets\n");
    for(int i=0; i<squad_size; i++) {
        printf("%s\t%d\t%d\t%d\n", x[i].name, x[i].age, x[i].runs, x[i].wickets);
    }
}

  // Function to update runs for a team
void update_run(struct team x[]) {
    char player_name[MAX];
    printf("Enter the name of the player to update runs: ");
    if(fgets(player_name, MAX, stdin) == NULL){
        printf("Error reading player name.\n");
        return;
    }
    player_name[strcspn(player_name, "\n")] = '\0';

      // Find the player
    int found = 0;
    for(int i=0; i<SQUAD; i++) {
        if(strcmp(x[i].name, player_name) == 0) {
            found = 1;
            printf("Current runs for %s: %d\n", x[i].name, x[i].runs);
            printf("Enter new runs: ");
            int new_runs;
            if(scanf("%d", &new_runs)!=1){
                while(getchar() != '\n');
                printf("Invalid input for runs.\n");
                return;
            }
            while(getchar() != '\n');
            x[i].runs = new_runs;
            printf("Runs updated successfully.\n");
            break;
        }
    }
    if(!found) {
        printf("Player not found in the team.\n");
    }
}

  // Function to save team data back to file
void save_team_data(const char *filename, struct team x[]) {
    FILE *file = fopen(filename, "w");
    if(file == NULL) {
        printf("Error opening file %s for writing.\n", filename);
        return;
    }
    for(int i=0; i<SQUAD; i++) {
        fprintf(file, "%s %d %d %d\n", x[i].name, x[i].age, x[i].runs, x[i].wickets);
    }
    fclose(file);
    printf("Team data saved successfully to %s.\n", filename);
}

  // Function to find the youngest player across both teams
void younger_player(struct team team1[], struct team team2[]) {
    struct team *youngest = &team1[0];
    for(int i=1; i<SQUAD; i++) {
        if(team1[i].age < youngest->age) {
            youngest = &team1[i];
        }
    }
    for(int i=0; i<SQUAD; i++) {
        if(team2[i].age < youngest->age) {
            youngest = &team2[i];
        }
    }
    printf("\nThe youngest player is %s, Age: %d\n", youngest->name, youngest->age);
}

  // Function to find and display the most rated player in Team 1
void most_rated_player_team1(struct team team1[]) {
    int ratings[SQUAD];
    calculate_ratings(team1, ratings);

    int max_rating = ratings[0];
    int max_index  = 0;
    for(int i=1; i<SQUAD; i++) {
        if(ratings[i] > max_rating) {
            max_rating = ratings[i];
            max_index  = i;
        }
    }
    printf("\nMost rated player in Team 1: %s, Rating: %d\n", team1[max_index].name, max_rating);
}

  // Function to find and display the most rated player in Team 2
void most_rated_player_team2(struct team team2[]) {
    int ratings[SQUAD];
    calculate_ratings(team2, ratings);

    int max_rating = ratings[0];
    int max_index  = 0;
    for(int i=1; i<SQUAD; i++) {
        if(ratings[i] > max_rating) {
            max_rating = ratings[i];
            max_index  = i;
        }
    }
    printf("\nMost rated player in Team 2: %s, Rating: %d\n", team2[max_index].name, max_rating);
}

  // Function to determine and display the man of the match
void man_of_the_match(struct team team1[], struct team team2[]) {
      // Simple criteria: highest rating
    int ratings1[SQUAD];
    int ratings2[SQUAD];
    calculate_ratings(team1, ratings1);
    calculate_ratings(team2, ratings2);

    int  max_rating    = ratings1[0];
    char *man_of_match = team1[0].name;

    for(int i=1; i<SQUAD; i++) {
        if(ratings1[i] > max_rating) {
            max_rating   = ratings1[i];
            man_of_match = team1[i].name;
        }
    }

    for(int i=0; i<SQUAD; i++) {
        if(ratings2[i] > max_rating) {
            max_rating   = ratings2[i];
            man_of_match = team2[i].name;
        }
    }

    printf("\nMan of the Match: %s with a rating of %d\n", man_of_match, max_rating);
}

  // Function to check if a file is opened successfully
int file_check(FILE *file) {
    if(file == NULL) {
        printf("Couldn't open the file.\n");
        exit(1);
    } else {
        printf("File opened successfully.\n");
    }
    return 0;
}
