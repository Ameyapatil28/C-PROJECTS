#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int randomNumber;
      srand(time(0));

     int computerscore = 0 ,user,userscore = 0;
     printf("the one to win 5 rounds first wins\n");


while (computerscore < 5 && userscore < 5)
{
  
     randomNumber = (rand() % 3) + 1;
     printf("enter 1 for rock\n 2 for paper \n 3 for scissors\n");
     scanf("%d",&user);
     printf("computer chose %d\n",randomNumber);
     if ((randomNumber == 1 && user == 3) || (randomNumber == 2 && user == 1) || (randomNumber == 3 && user == 2))
     {
       printf("computer wins this round\n");
       computerscore ++;
     }
     else if (randomNumber == user)
     {
       printf("it's a tie!! no score have been added for this round\n");
     }
     else if (user >= 1 && user <= 3)
     {
        printf("user wins this round\n");
       userscore ++;
     }
     else
     {
        printf("invalid input\n");
     }

     printf("Score: You %d - %d Computer\n", userscore, computerscore);
     
 }
        

if (computerscore == 5)
{
    printf("computer wow \n better luck next time\n");
}
else if (userscore == 5)
{
  printf("congratulations you have won the game\n");
}


return 0;
}