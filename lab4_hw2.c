#include <stdio.h>
#include <math.h>

int main(void) {

    int height ;

    do {
        printf("Enter the height of the triangle (from 1 to 100): ");
        scanf("%d", &height);

        // between 1 to 100
        if (height < 1 || height > 100) {
            printf("Height must be between 1 and 100. Please try again.\n");
        }
    } while (height < 1 || height > 100);

    // round
      height = (int)floor(height);



    // triangle
    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print hashes
        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}