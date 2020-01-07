/*abdullah chattha
assign 5 prob 4
Mar 30
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//functions
int gcdRecursive (int num1, int num2){
//cycles until gcd is reached in num1
if (num2 == 0){
  return num1;
}else {
  gcdRecursive (num2, num1%num2);
}

}

//main function
void main() {
srand ( time(NULL) );//generates new random number on every run
//variables
int number1 = rand ()%100 + 2;
int number2 = rand ()%100 + 2;
//output
printf ("The GCD of %d and %d is %d",number1, number2, gcdRecursive(number1, number2));

}
