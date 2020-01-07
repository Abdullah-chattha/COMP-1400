/*abdullah chattha
assign 5 prob 1
Mar 30
*/
#include <stdio.h>

//functions
int countOddDigits (int num){

int remainder, count=0;

while (num != 0){
  remainder = num%10;//checks number from the back
  if (remainder%2 != 0)//checks for odd vs even
    count++;
  remainder=  0;//reset
  num=num/10;//breaks off number on the end
}
return count;
}

//main function
void main() {
  //variables
int number,odd_digits=0;
//loop
while (1){
  printf("Enter integer to count odd digits (10 to exit): " );
  scanf ("%d", &number);
  if (number == 10){
    break; //exit condition
  }else {
    odd_digits = countOddDigits (number);//function call
  }
  //output
  printf("The number of odd digits is: %d\n",odd_digits );
}

}
