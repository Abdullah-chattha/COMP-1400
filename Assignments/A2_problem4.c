/*abdullah c
assign 2 prob 4
feb 10
*/
#include <stdio.h>

void main (){

//variables
int number;

//input
printf("Please enter a positive integer: \n" );
scanf("%d",&number );

//comparison output
if (number > 999)
  printf("%d has four or more digits.\n", number );
else if (number > 99)
  printf("%d has three digits.\n", number );
else if (number > 9)
  printf("%d has two digits.\n", number );
else
  printf("%d has one digit.\n", number );
printf("Goodbye...!", number );
}
