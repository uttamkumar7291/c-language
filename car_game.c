#include <stdio.h>

void startGame() {
    printf("Welcome to the Car Game!\n");
    printf("Instructions:\n");
    printf("1. Press 'a' to accelerate.\n");
    printf("2. Press 'b' to brake.\n");
    printf("3. Press 's' to display speed.\n");
    printf("4. Press 'q' to quit the game.\n");
}

int main() {
    char choice;
    int speed = 0;

    startGame();

    while (1) {
        printf("Enter your choice: ");
        choice = getchar();
        getchar(); // To consume the newline character

        if (choice == 'a') {
            speed += 10;
            printf("Accelerating! Current speed: %d km/h\n", speed);
        } else if (choice == 'b') {
            speed -= 10;
            if (speed < 0) speed = 0; // Prevent negative speed
            printf("Braking! Current speed: %d km/h\n", speed);
        } else if (choice == 's') {
            printf("Current speed: %d km/h\n", speed);
        } else if (choice == 'q') {
            printf("Exiting the game. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
