/*abdullah c
assign 1 prob 3
jan 27
*/
#include <stdio.h>

void main (){
  //variabels
  float length, width, cost, total =0, area =0;

  //input
    printf("Enter rooms length in feet: ");
    scanf ("%f",&length);
    printf("Enter rooms width in feet:");
    scanf ("%f",&width);
    printf("Tiling cost per square foot: ");
    scanf ("%f",&cost);
    printf ("\n");

    //calcs
    area = (length * width);
    total = (length * width)*cost;

    //output
    printf("area of room in feet: %.2f m^2 ",area);
    printf("Total cost of tiles: $%.2f ",total);

}
