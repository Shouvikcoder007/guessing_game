#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int random, guess;
    int attempt = 0;
    srand(time(NULL));
    printf("Wellcome to the world of Guessing!\n");
    random = (rand() % 100) + 1; 
    printf("%d", random);
    do{
        printf("Please guess a number(1-100):");
        scanf("%d",&guess);
        attempt++;

        if(random<guess) {
            printf("Guess a smaller number.\n");
        }
        else if(random>guess) {
            printf("Guess a greater number.\n");
        }
        else {
            printf("Congrats! You guessed the number in %d attempts.", attempt);
        }
    }
    while(random!=guess);

    printf("Thanks for playing!\n");
    printf("Developed by Shouvikcoder.\n");
    return 0;
}