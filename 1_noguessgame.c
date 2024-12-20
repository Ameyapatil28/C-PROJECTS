#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 101;

  

int guess, noofguess = 0 ;   
printf("guess the random number between 0 to 100");   
do
{
    printf("enter your guess:\n");
    scanf("%d", &guess);

if(guess>randomNumber) {
printf("lower number please!\n");
}
else if (guess<randomNumber)
{
    printf("higher number please!\n");
}
noofguess++;

} while (guess != randomNumber);


printf("congrats you guessed the number in %d guesses",noofguess);


    return 0;
}

