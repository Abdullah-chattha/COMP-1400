/*abdullah c
assign 1 prob 4
jan 27
*/
#include <stdio.h>

void main (){
  //variabels
  int quater, dime, nickle, pennies, dollar, cent ;


  //input
    printf("Tell me how many quaters, dime, nickles,and pennies u have. i will tell u how many dollars and cents are in ur pocket\n ");
    printf("Number of quaters:");
    scanf ("%d",&quater);
    printf("Number of dimes:");
    scanf ("%d",&dime);
    printf("Number of nickles:");
    scanf ("%d",&nickle);
    printf("Number of pennies:");
    scanf ("%d",&pennies);
    printf ("\n");

    //calcs
    cent = (quater * 25)+(dime*10)+(nickle*5)+pennies;
    dollar = (cent-cent%100)/100;
    cent = cent%100;

    //output
    printf("you have %d dollars and %d cents in your pocket", dollar, cent);


}
