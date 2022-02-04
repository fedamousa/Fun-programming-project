//********** Study Time Program *************//
#include <stdio.h>
#define size1 8
#define size2 6
int main() {
//****** INITIALIZE ARRAY OF SCHEDULE********//
char Schedule[size1][size2]= {
{'0','1','2','3','4','5'},
{'1','C','M','P','I','A'},
{'2','I','C','M','A','P'},
{'3','A','P','C','I','M'},
{'4','M','I','P','A','C'},
{'5','P','C','M','P','I'},
{'6','I','P','C','M','A'},
{'7','C','M','P','A','I'}};
//************PRINT Schedule ****************//
printf(" #YOUR Schedule \n");
printf("-----------------------------\n");
printf(" DAY / HOUR");
for (int i=0 ; i<size1 ; i++) {
printf("\n\n");
for (int j=0 ; j<size2 ; j++) {
if (Schedule[i][j] == '0')
printf(" ");
else
printf("%4c",Schedule[i][j]);
} /*END INNER LOOP*/
} /*END OUTER LOOP*/
printf("\n-----------------------------");
//***************START QUERY******************//
int hour,day,n;
printf("\nWELCOME!\nPLEASE ENTER ANY NUMBER TO START OR [0] TO EXIT : ");
scanf("%d",&n);
while (n != 0){ /*START WHILE LOOP*/
printf("PLEASE ENTER THE DAY : ");
scanf("%d",&day);
printf("PLEASE ENTER THE HOUR : ");
scanf("%d",&hour);
switch (Schedule[day][hour]) {
case 'C' :
printf("YOU SHOULD STUDY : COMPUTER PROGRAMMING\n"); break;
case 'A' :
printf("YOU SHOULD STUDY : ARAB\n"); break;
case 'M' :
printf("YOU SHOULD STUDY : MATH\n"); break;
case 'P' :
printf("YOU SHOULD STUDY : PHYSICS\n"); break;
case 'I' :
printf("YOU SHOULD STUDY : INFORMATION TECHNOLOGY\n"); break;
default : /*wrong input case*/
printf("\a!! NON-PROPER INPUT !!\nPLEASE ENTER A PROPER NUMBER FOR THE DAY AND HOUR.\n");
} /*END SWITCH*/
printf("\nPLEASE ENTER ANY NUMBER TO START OR [0] TO EXIT : ");
scanf("%d",&n); } /*END WHILE LOOP*/
if (n==0)
printf("\n~ YOU HAVE EXITED THE PROGRAM ~");
return 0; } /*END MAIN FUNCTION*/
