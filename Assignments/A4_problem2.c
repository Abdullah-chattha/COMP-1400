/*abdullah c
assign4  prob 2
mar 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30

void main (){

srand ( time(NULL) );//generates new randomnumber on every compile
int nums [MAX];//array
//variables
int input,counter=0;

//enters random numbers into nums array
for (int i=0;i<=MAX-1;i++ ) {
  nums [i]= rand ()%20 + 1;
}

//while loop to ask for input
while (1){
  printf ("Enter a number between 1 and 20 to be found (<=0 for exit): ");
  scanf ("%d",&input);
  //loop exit condtion
  if (input <= 0){
    printf("End.\n" );
    break;
  }else{
    //compares input to array
  for (int k=0;k<=MAX-1;k++ ) {
    if (nums[k] == input){
      counter++;
    }
  }
  //output
  printf("%d appears %d times. \n",input, counter );
  counter =0;//reset
}

}

}
