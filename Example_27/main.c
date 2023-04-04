#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20
#define MAX_ATTEMPTS 3

int main() {
    char username[MAX_USERNAME_LENGTH + 1];
    char password[MAX_PASSWORD_LENGTH + 1];
    int attempts = 0;
    int is_authenticated = 0;

    printf("Registration\n");
    printf("Enter a username (up to %d characters): ", MAX_USERNAME_LENGTH);
    scanf("%s", username);
    printf("Enter a password (up to %d characters): ", MAX_PASSWORD_LENGTH);
    scanf("%s", password);
    printf("Registration successful.\n");

    printf("Login\n");
    while (attempts < MAX_ATTEMPTS && !is_authenticated) {
        char input_username[MAX_USERNAME_LENGTH + 1];
        char input_password[MAX_PASSWORD_LENGTH + 1];

        printf("Enter your username: ");
        scanf("%s", input_username);
        printf("Enter your password: ");
        scanf("%s", input_password);

        if (strcmp(input_username, username) == 0 && strcmp(input_password, password) == 0) {
            printf("Login successful!\n");
            is_authenticated = 1;
        } else {
            printf("Incorrect username or password. Please try again.\n");
            attempts++;
        }
    }

    if (!is_authenticated) {
        printf("Maximum number of attempts exceeded. Exiting program.\n");
    }

    return 0;
}

