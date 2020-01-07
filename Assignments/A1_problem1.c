/*abdullah c
assign 1 prob 1
jan 27
*/

#include <stdio.h>

void main (){
  //variables
  int x , y;
  int sum, product, difference;
  float remainder,quotient;

//input
  printf("Enter two integer numbers with a space in betweeen: ");
  scanf ("%d %d",&x,&y);
//calcs
  sum = x + y;
  product = x*y;
  difference = x - y;
  quotient = x/y;
  remainder = x%y;
//output
  printf("sum: %d\n ", sum);
  printf("product: %d\n ", product);
  printf("difference:%d\n ", difference);
  printf("quotient: %.2f\n ", quotient);
  printf("remainder: %.2f\n ", remainder);

}
