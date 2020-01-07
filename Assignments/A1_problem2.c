/*abdullah c
assign 1 prob 2
jan 27
*/
#include <stdio.h>

void main (){
  //varibales
  int code, month, day, year;
  float price;

//input
  printf("Enter item code: ");
  scanf ("%d",&code);
  printf("Enter item price: ");
  scanf ("%f",&price);
  printf("Enter purchase date as mm/dd/yyyy: ");
  scanf ("%d/%d/%d",&month,&day, &year);
  printf ("\n");
//output
  printf("code\tprice\t\tPurchase date\n");
  printf("-------\t------------\t-----------\n");
  printf("%d\t%.2f\t\t%d/%d/%d\n ", code, price, month,day,year);

}
