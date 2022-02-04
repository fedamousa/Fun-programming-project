#include<stdio.h>
/*global var*/
int target;
void countSteps(int todaySteps) {
/* base case*/
if (todaySteps > 0) {
/* decrement target */
target--;
//check if target is equal 0
if (target == 0) {
printf("\nWow, you did a great job!\n");
}
else {
 /*recursive step*/
/* decrement today steps by calling the function itself */
todaySteps = todaySteps - 1;
countSteps(todaySteps);
} }
else {
/* if today steps less than the target */
printf("\nOoops, you have not finished your daily steps ! Try tomorrow.\n");
} }
int main()
{
int todaySteps;
printf("Enter your daily target: ");
scanf("%d", &target);
printf("Enter your todays steps: ");
scanf("%d", &todaySteps);
countSteps(todaySteps);
 return 0;
}
