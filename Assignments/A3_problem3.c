/*abdullah c
assign 3 prob 3
feb 10
*/

#include<stdio.h>

void main (){

int num;
float e=1,fac=1;
//input
printf("Enter value for n: " );
scanf("%d",&num );
//calculates e
for (int i = 1; i < num+1; i++) {
  fac = fac*i;
  e += (1/fac);
}
//output
printf("%.2f\n",e );

}
