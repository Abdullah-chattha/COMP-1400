/*abdullah c
assign 2 prob 2
feb 10
*/
#include <stdio.h>

void main (){

//variables
int num1, num2, num3, num4;

//input
printf("Enter 4 integers:" );
scanf("%d %d %d %d",&num1, &num2, &num3, &num4 );

//calculates largest number
if (num1 > num2 && num1 > num3 && num1 > num4)
  //output
  printf("Largest number is %d\n", num1 );
else if (num2 > num1 && num2 > num3 && num2 > num4)
  //output
  printf("Largest number is %d\n", num2);
else if (num3 > num1 && num3 > num2 && num3 > num4)
  //output
  printf("Largest number is %d\n", num3);
else if (num4 > num1 && num4 > num3 && num4 > num2)
    //output
  printf("Largest number is %d\n", num4);

//calculates smallest number
if (num1 < num2 && num1 < num3 && num1 < num4)
  //output
  printf("Smallest number is %d", num1 );
else if (num2 < num1 && num2 < num3 && num2 < num4)
  //output
  printf("Smallest number is %d", num2);
else if (num3 < num1 && num3 < num2 && num3 < num4)
  //output
  printf("Smallest number is %d", num3);
else if (num4 < num1 && num4 < num3 && num4 < num2)
  //output
  printf("Smallest number is %d", num4);


}
