#include <stdio.h>
#include <math.h>

int main(void) {

    int players ;
    float weight ;
    float totalTeam1 = 0, totalTeam2 = 0;

    printf("Enter the number of players per team: ");
    scanf("%i", &players);
    
    
    if (players <= 0) {
        printf("Invalid number of players.\n");
        return 1;
 }


    // weights of all team members
    for (int i = 1; i <= players; i++) {
        printf("Team 1 player %d: ", i);
        scanf("%f", &weight);
        totalTeam1 += weight;

        printf("Team 2 player %d: ", i);
        scanf("%f", &weight);
        totalTeam2 += weight;
    }

    // who wins
    if (totalTeam1 > totalTeam2) {
        printf("Team 1 has an advantage\n");
    } else if (totalTeam2 > totalTeam1) {
        printf("Team 2 has an advantage\n");
    } else {
        printf("No team has an advantage\n");
    }

    // total weight
    printf("Total weight for team 1: %.6f\n", totalTeam1);
    printf("Total weight for team 2: %.6f\n", totalTeam2);

    return 0;
}