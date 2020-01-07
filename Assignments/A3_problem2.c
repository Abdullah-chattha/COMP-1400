/*abdullah c
assign 3 prob 2
feb 10
*/

#include<stdio.h>

void main()

{

int n,count=0;float avg=0;

printf("enter the numbers : ");

while(1)
{
  //reads input
  scanf("%d",&n);

  // exits loop when read
  if(n==9999)
    break;
  else 
    avg+=n;
    count++;

}
//output
printf("the average is : %.2f",avg/count);

}
