#include <stdio.h>
// by:er.uttam kumar using 
int main() {
    float cp, sp; // Changed to float to handle decimal values
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    float profit = sp - cp;
    float loss = cp - sp;
    float profit_percentage, loss_percentage;

    if (sp > cp) {
        profit_percentage = (profit / cp) * 100;
        printf("Profit\n");
        printf("Profit percentage is: %f\n", profit_percentage);
    } else if (sp < cp) {
        loss_percentage = (loss / cp) * 100;
        printf("Loss\n");
        printf("Loss percentage is: %f\n", loss_percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
