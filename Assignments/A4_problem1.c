/*abdullah chattha
assign4  prob 1
mar 10
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void main (){

int numbers [MAX];//array
//variables
int positive, negative, odd, even;

//collects data and caterogrizes
printf("Enter 10 integers (leave space in between numbers): " );
for (int i = 0; i <MAX ; i++) {
  scanf("%d",&numbers[i] );
  //even or odd
  if ((abs (numbers [i])%2) == 1){
    odd++;
  }else{
    even++;
  }
  //postive or negative
  if (numbers [i] >= 0){
    positive++;
  }else{
    negative++;
  }
}
//output data
printf("Numbers are:" );
for (int j = 0; j <=MAX-1 ; j++) {
  printf(" %d,",numbers [j] );
}

printf("\n# positive numbers = %d\n", positive );
printf("# negative numbers = %d\n", negative );
printf("# odd numbers = %d\n", odd );
printf("# even numbers = %d\n", even );

}
