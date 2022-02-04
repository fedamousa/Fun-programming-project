#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
printf("*******************************************\n");
printf("***Whoever reaches 20 first is a winner!***\n");
printf("*******************************************\n\n");
printf("NOTE:\nThe computer will decide whether you are allowed to say one or two numbers.\n\n");
int compChoice, compDecision, gameCounter, flag;
// flag will indicate which player is the winner
// if flag = 1, player 1 is winning
// if flag = 2, player 2 is winning
srand(time(NULL)); // -a related to time- random number generator
compChoice = 1 + rand()%2; // computer chooses who starts first
printf("__________________________________________\n");
printf(" The player who starts first is player %d\n" , compChoice);
printf("__________________________________________\n");
// Game Loop
for (gameCounter = 1; gameCounter <= 20; ){
if(gameCounter == 20) // if only saying 20 is remained to win
 compDecision = 1; // don't allow the player to say two numbers
else
compDecision = 1 + rand()%2; // computer decides if the player is allowed to say one or two numbers
printf("\nComputer's decision: %d\n" , compDecision);
 if(compChoice == 1) {
 printf("First player: ");
 flag = 1; // indicates that player 1 is now playing
 compChoice = 2; // set compChoice = 2 to allow the second player to play
 } else if(compChoice == 2){
 printf("Second player: ");
 flag = 2; // indicates that player 2 is now playing
 compChoice = 1; // set compChoice = 1 to let the first player play
 }
 if(compDecision == 1){
 printf("%d\n" , gameCounter); // the player is allowed to say one number
 gameCounter +=1;
 } else { // the player is allowed to say two numbers
 printf("%d, %d\n" , gameCounter , gameCounter + 1);
 gameCounter +=2;
 } }
if (flag == 1) // if the loop ended with the first player saying 20
 printf("\n~~ Congratulations! The first player is the winner! ~~\a\n");
else if (flag == 2) // if the loop ended with the second player saying 20
 printf("\n~~ Congratulations! The second player is the winner! ~~\a\n");
return 0;
}
