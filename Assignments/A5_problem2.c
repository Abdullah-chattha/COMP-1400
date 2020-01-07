/*abdullah chattha
assign 5 prob 2
Mar 30
*/
#include <stdio.h>
#include <stdbool.h>

//functions
bool isPerfect (int num){
//variables
int sum_factors = 0,num2;

num2 = num;//keeps original number
for (int j=1;j< num; j++){//cycles thru all divisors
  if (num2%j == 0){//finds divisor
    sum_factors = sum_factors + j;
  }
}
//checks the sum with the number
if (sum_factors == num){
  return true;
}else {
  return false;
}
}

//main function
void main() {
//output
printf("The perfect numbers are: \n" );
for (int i = 1; i <= 1000; i++){
  if (isPerfect (i) == true){//function call
    printf("%d\n",i );
  }

}

}
