/*abdullah chattha
assign 5 prob 3
Mar 30
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

//functions
int countPositives (int array1 [], int num){
int count=0;
  for (int j=0;j<=num-1;j++){
    if (array1 [j] >= 0) //figures out positive or negative
    count++;
  }
return count;
}

int countNegative (int array1 [], int num){
  int count=0;
    for (int j=0;j<=num-1;j++){
      if (array1 [j] < 0)//figures out positive or negative
      count++;
    }
return count;
}

int countOdds (int array1 [], int num) {
  int count=0;
    for (int j=0;j<=num-1;j++){
      if ((abs (array1 [j])%2) != 0)//figures out even or odd
      count++;
    }
return count;
}

int countEvens (int array1 [], int num) {
  int count=0;
    for (int j=0;j<=num-1;j++){
      if ((abs (array1 [j])%2) == 0)//figures out even or odd
      count++;
    }
  return count;
}


//main function
void main() {
srand ( time(NULL) );//generates new random number on every run
int size=MAX;
int positive_number=0,negative_number=0,odd_number=0, even_number=0;
int array [MAX];//array to store random numbers

//makes 10 random numbers between -20 to 20
for (int i=0;i<=MAX-1;i++){
  array [i] = rand() % 41 + (-20);
}
//function calls
positive_number = countPositives (array, size);
negative_number = countNegative (array, size);
odd_number = countOdds (array, size);
even_number = countEvens (array, size);

//output
//display of random numbers
printf("Numbers are: " );
for (int j=0;j<=MAX-1;j++){
  printf("%d, ", array [j] );
}
printf("\n# positive numbers = %d\n", positive_number );
printf("# negative numbers = %d\n", negative_number );
printf("# odd numbers = %d\n", odd_number );
printf("# even numbers = %d\n", even_number );


}
