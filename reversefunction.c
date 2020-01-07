#include <stdio.h>

#define MAX 50

//functions
int total (int array [], int len){

  int sum;
  for (int j=0;j<len;j++){
    sum = sum + array [j];
  }
  return sum;
}

int reverse (int rev){
  int reverse = 0;

  while (rev != 0) {
    reverse = reverse *10;//mutiplys last number in rev by 10
    reverse = reverse + rev%10;//adds the remaining numbers in rev
    rev = rev/10;
  }

  return reverse;
}

//main function
void main() {

int count,sum,rever;
int num [MAX];//array

//input
for (int i=0;i<MAX-1;i++){
  printf("Please enter a number to insert into the array (-1 to exit): " );
  scanf("%d",&num [i]);
  count++;//counts length of array before -1
  if (num [i] == -1)
    break;
}
sum = total (num, count-1);//sends array stored in num and length of the array
rever = reverse (sum);//second function call for reverse
//output
printf("The total is (%d), and the reverse of the total is (%d)",sum, rever );

}
