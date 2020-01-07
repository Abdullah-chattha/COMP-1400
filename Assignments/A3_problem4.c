/*abdullah c
assign 3 prob 4
feb 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main (){
//variables
srand ( time(NULL) );//generates new randomnumber on every run
int goal = rand() % 50 + 1;
int guess=0,num;

//while loop
while (num != goal && guess < 10){

  printf("Enter your guess (between 1 and 50):" );
  scanf("%d",&num);

  if (guess == 10){
    break;
  }else
    if (num == goal){
      printf("Correct, the number was %d.\n", goal );
      break;
    }
    else if (num < goal){
      printf("Too low …\n" );
      guess++;
    }
    else if (num > goal){
      printf("Too high …\n" );
      guess++;
    }
}
//output for too many guesses
if (guess == 10){
    printf("Sorry, the number was %d.\n",goal );
}

}
