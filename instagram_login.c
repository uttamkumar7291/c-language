#include <stdio.h>
#include <string.h>

#define USERNAME "user"
#define PASSWORD "pass"

int main() {
    char username[50];
    char password[50];

    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(username, USERNAME) == 0 && strcmp(password, PASSWORD) == 0) {
        printf("Login successful! Welcome to Instagram.\n");
    } else {
        printf("Login failed! Please check your username and password.\n");
    }

    return 0;
}
