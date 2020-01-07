/*abdullah c
assign4  prob 3
mar 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void main (){

srand ( time(NULL) );//generates new random number on every compile
float nums [MAX];//array
//vaariables
int max =0,min=100;

//enters random from 1 to 100 numbers into nums array
for (int i=0;i<=MAX-1;i++ ) {
  nums [i]= rand ()%100 + 1;
}

//display array elements
printf("Array elements: " );
for (int j=0;j<=MAX-1;j++ ) {
 printf("%.0f, ", nums [j]);
 //find max and min
 if (nums[j] > max){
   max = nums[j];
 }
 if (nums[j] < min){
   min = nums[j];
 }
}
//output
printf("\n");
printf("Array elements (Scaled): ");
for (int k=0;k<=MAX-1;k++ ) {
nums[k] = ((nums[k]-min) / (max - min));//calculations
printf("%.2f, ", nums [k]);
}

}
