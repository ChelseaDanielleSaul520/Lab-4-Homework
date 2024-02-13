#include <stdio.h>
#include <math.h>

int main() {
    // Initialize total payment
    float totalPayment = 0;

    // Loop until user chooses to exit
    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Yumbuger w/ Fries and Drink (87.00)\n");
        printf("2. Cheesy Yumburger w/ Fries and Drink (99.00)\n");
        printf("3. Bacon Cheesy Yumburger Meal w/ Fries and Drinks (109.00)\n");
        printf("4. 1pc Chickenjoy w/ Drink (99.00)\n");
        printf("5. Jolly Spaghetti (55.00)\n");
        printf("6. 1pc Burger Steak w/ Drink (65.00)\n");
        printf("7. Exit\n");

        // Prompt user for choice
        printf("\nChoice: ");
        float choice;
        scanf("%f", &choice);

        // Round down if choice is a float
        int roundedChoice = (int)floor(choice);

        // Check if choice is valid
        if (roundedChoice < 1 || roundedChoice > 7) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        // Check if user wants to exit
        if (roundedChoice == 7) {
            printf("Total Payment: %.2f\n", totalPayment);
            break;
        }

        // Prompt user for quantity
        printf("Quantity: ");
        float quantity;
        scanf("%f", &quantity);

        // Round down if quantity is a float
        int roundedQuantity = (int)floor(quantity);

        // Calculate payment for the chosen item and quantity
        float payment = 0;
        switch (roundedChoice) {
            case 1:
                payment = 87.00 * roundedQuantity;
                break;
            case 2:
                payment = 99.00 * roundedQuantity;
                break;
            case 3:
                payment = 109.00 * roundedQuantity;
                break;
            case 4:
                payment = 99.00 * roundedQuantity;
                break;
            case 5:
                payment = 55.00 * roundedQuantity;
                break;
            case 6:
                payment = 65.00 * roundedQuantity;
                break;
        }

        // Add payment to totalPayment
        totalPayment += payment;
    }

    return 0;
}