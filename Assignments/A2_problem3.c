/*abdullah c
assign 2 prob 3
feb 10
*/
#include <stdio.h>

void main (){

//variables
int number, d1, d2;

//input
printf("Enter a two-digit number:" );
scanf("%d",&number );

//breaks digits
d1 = number - (number % 10);
d2 = number % 10;

//output
  printf("You entered the number ");
  //numebrs b/w 9-20
  if (number > 9 && number < 20) {
    switch (number) {
    case 10: printf("ten");
            break;
    case 11: printf("eleven");
            break;
    case 12: printf("twelve");
            break;
    case 13: printf("thirteen");
            break;
    case 14: printf("fourteen");
            break;
    case 15: printf("fifteen");
            break;
    case 16: printf("sixteen");
            break;
    case 17: printf("seventeen");
            break;
    case 18: printf("eighteen");
            break;
    case 19: printf("nineteen");
            break;
      }


  }
  //numbers b/w 19-100 first part of output
if (number > 19 && number < 100){
  switch (d1) {
    case 20: printf("twenty");
            break;
    case 30: printf("thirty");
            break;
    case 40: printf("forty");
            break;
    case 50: printf("fifty");
            break;
    case 60: printf("sixty");
            break;
    case 70: printf("seventy");
            break;
    case 80: printf("eighty");
            break;
    case 90: printf("ninety");
            break;
  }
  //second part of output
  switch (d2) {
    case 1: printf("-one");
            break;
    case 2: printf("-two");
            break;
    case 3: printf("-three");
            break;
    case 4: printf("-four");
            break;
    case 5: printf("-five");
            break;
    case 6: printf("-six");
            break;
    case 7: printf("-seven");
            break;
    case 9: printf("-nine");
            break;
    default:printf(" ");
  }
}
}
