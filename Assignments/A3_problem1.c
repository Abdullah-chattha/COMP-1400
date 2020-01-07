/*abdullah c
assign 3 prob 1
feb 10
*/

#include <stdio.h>

int main(void){

//variables
int howmany,i ;
float value,total=0;

//initial input
printf("Enter integers (first number is how many): ");

scanf("%d",&howmany);
//gets numbers in loop
for(i=1;i<=howmany;i++){

  scanf("%f",&value);

  total+=value;

}
//output
printf("\nSum is %.2f",total);

}
