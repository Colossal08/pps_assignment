#include<stdio.h>

int main(){
    int amtNeeded, amtGiven;
    int quotient, remainder;

    scanf("%d", &amtGiven);
    scanf("%d", &amtNeeded);

    quotient = amtGiven / amtNeeded;
    remainder = amtGiven % amtNeeded;

    printf("Quotient: %d", quotient);
    printf("\nRemainder: %d", remainder);

    return 0;
}
