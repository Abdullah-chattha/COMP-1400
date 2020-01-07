/*abdullah chattha
104261172
bonus assignment
Mar 31
*/
#include <stdio.h>
#include <stdbool.h>

//global variable
bool p_flag;
//functions
//input function
int readNum (){
int Num;
//get input
printf("\nEnter a number between 2 and 100(0 for exit): ");
scanf("%d", &Num);

if(Num == 0)
  return 0;
else if(Num>1 && Num<101) //valid input
  return Num;

}
// find the instances of the prime numbers
int findPrimeCount(int num, int prime){

//variables
int count = 0, i, j;
//loop from 2 to Num
for(i=2; i<=num; i++){

//if divisible by prime
if(i%prime == 0){
//get number of prime's in i
j = i;

while(j>0){
  //parse thru the number
  if(j%prime == 0)
    count++;
  else
    break;
  j = j/prime;
  }
}
}

return count; //return count
}

//function to check prime or not
bool isPrime(int prime){

for(int i=2; i<=prime/2;i++){
  if(prime%i == 0){
    p_flag = false;
    return p_flag;
  }
}
p_flag = true;
return p_flag;
}

// main function
void main(){
//variables
int i, count;

//loop till Num=0
while(1){

int input;
//read function
input = readNum ();

 //if 0, end program
if(input == 0)
  break;
else if (input < 2 || input > 100)
printf("Invalid Input! \n" );

else { //for valid input

 printf("%d! = ", input);

 //get all primes
for(i=2; i<=input; i++){

if(isPrime(i) == true){ //check if i is prime

count = findPrimeCount(input, i); //get prime count
//output
  if(i==2)
    printf(" (%d^%d)", i, count);
  else
    printf("*(%d^%d)", i, count);
      if (i == 23 || i == 61)//indent
      printf("\n\t");
  }

 }

 printf("\n\n");

 }

}
  printf("End\n");

}
