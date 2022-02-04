#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contains prototype for function time */
/* function main begins program execution */
int main()
{
printf("\n\"This program suggests what you should eat today\"\n\n\n");
printf(" Enter 1 if you want me to suggest you a BREAKFAST.\n");
printf(" Enter 2 if you want me to suggest you a LUNCH.\n");
printf(" Enter 3 if you want me to suggest you a DINNER.\n");
printf(" Enter 4 if you want me to suggest you a SNACK.\n");
printf(" Enter 0 to exit the program.\n");
/* define variables */
int drink, dish1, dish2;
/* randomize random number generator using current time */
srand(time(NULL));
unsigned int num;
printf("\n Please enter the number: ");
scanf("%u" , &num); /* get number from user */
while (num != 0){
 /* if user entered number 1 it is breakfast */
 if (num == 1){
 drink = 1 + rand()% 3;
 dish1 = 1 + rand()% 3;
 dish2 = 1 + rand()% 3;
 printf(" You Chose BREAKFAST\n");
 printf(" Your suggested drink is : |");
 /* breakfast switch */
 /* switch for drink in breakfast */
 switch(drink){
 case 1 :
 printf("Orange Juice\n");
 break;
 case 2 :
 printf("Black Coffee\n");
 break;
 case 3 :
 printf("Fresh Milk\n");
 break;
 } /* end switch */
 printf(" Your suggested main dish is : |");
 /* switch for a first dish in breakfast */
 switch(dish1){
 case 1 :
 printf("Pancakes\n");
 break;
 case 2 :
 printf("Fried Eggs with Sausages\n");
 break;
 case 3 :
 printf("Croissant\n");
 break;
 } /* end switch */
 printf(" Your suggested veggies\\fruits are: |");
 /* switch for a second dish in breakfast */
 switch(dish2){
 case 1 :
 printf("Carrots and Cucumbers with Yogurt\n");
 break;
 case 2 :
 printf("Berries\n");
 break;
 case 3 :
 printf("an Apple\n");
 break;
 } /* end switch */
 } /* end if */
 /* if user entered number 2 it is lunch */
 else if (num == 2){
 drink = 1 + rand()% 3;
 dish1 = 1 + rand()% 3;
 dish2 = 1 + rand()% 3;
 printf(" You Chose LUNCH\n");
 printf(" Your suggested drink is : |");
 /* Lunch switch */
 /* switch for drink in lunch */
 switch(drink){
 case 1 :
 printf("Mojito Strawberry\n");
 break;
 case 2 :
 printf("Blueberry juice\n");
 break;
 case 3 :
 printf("Cocktail juice\n");
 break;
 } /* end switch */
 printf(" Your suggested main dish is : |");
 /* switch for a first dish in lunch */
 switch(dish1){
 case 1 :
 printf("Rice with Salmon\n");
 break;
 case 2 :
 printf("Pink Pasta\n");
 break;
 case 3 :
 printf("Truffle Risotto\n");
 break;
 } /* end switch */
 printf(" Your suggested dessert is : |");
 /* switch for a second dish in lunch */
 switch(dish2){
 case 1 :
 printf("Saffron cake\n");
 break;
 case 2 :
 printf("Cheese cake\n");
 break;
 case 3 :
 printf("Eclair\n");
 break;
 } /* end switch */
 } /* end else if */
 /* if user entered number 3 it is dinner */
 else if (num == 3){
 drink = 1 + rand()% 3;
 dish1 = 1 + rand()% 3;
 dish2 = 1 + rand()% 3;
 printf(" You Chose DINNER \n");
 printf(" Your suggested drink is : |");
 /* dinner switch */
 /* switch for drink in dinner */
 switch(drink){
 case 1 :
 printf("Mango Juice\n");
 break;
 case 2 :
 printf("Pepsi\n");
 break;
 case 3 :
 printf("lemonade\n");
 break;
 } /* end switch */
 printf(" Your suggested main dish is : |");
 /* switch for a first dish in dinner */
 switch(dish1){
 case 1 :
 printf("Steak\n");
 break;
 case 2 :
 printf("Pizza \n");
 break;
 case 3 :
 printf("Burger\n");
 break;
 } /* end switch */
 printf(" Your suggested side dish: |");
 /* switch for a second dish in dinner */
 switch(dish2){
 case 1 :
 printf("Caesar Salad\n");
 break;
 case 2 :
 printf("Fries\n");
 break;
 case 3 :
 printf("sweet potato\n");
 break;
 } /* end switch */
 } /* end else if */
 /* if user entered number 4 it is snack */
 else if (num == 4){
 dish1 = 1 + rand()% 3;
 printf(" You Chose SNACK\n");
 printf(" Your suggested snack is : |");
 /* Snack switch */
 /* user choose just 1 dish in snack */
 switch(dish1){
 case 1 :
 printf("Popcorn\n");
 break;
 case 2 :
 printf("Ice cream\n");
 break;
 case 3 :
 printf("Nuts\n");
 break;
 } /* end switch */
 } /* end else if */
 /* if user entered wrong input, output massage */
 else {
 printf(" Wrong input!\nPlease consider the instruction and try again.\n");
 } /* end else */
 printf("\n Please enter the number: ");
 scanf("%u" , &num);
} /* end while */
 /* if user entered value 0, the program will exit */
 if (num == 0)
 printf(" You have Exited the Program\n");
return 0; /* indicate program ended successfully */
}
