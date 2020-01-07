#include <stdio.h>
#include <stdbool.h>

//functions
int readNum()
{
int num;
printf("Enter a positive integer number : ");
scanf(" %d", &num);
if(num<=0){
    printf("Invalid input.\n");
    return 0;
}else
return num;
}

int sumDigits(int num)
{
int sum=0, digit, temp;
temp = num;
while (num > 0)
{
    digit = num % 10;
    sum = sum + digit;
    num /= 10;
}
return sum;
}

bool repDigit (int num)
{

  int k,temp,flag=0,i;
  int frequency[9];//array of 9 counters
  temp=num;
  //setting frequency of digits as zero
  for(i=0;i<10;i++)
  {
     frequency[i]=0;
  }
  //counts the frequency of each type of digit
  while(num>0)
  {
  k=num%10;
  frequency[k]++;
  num/=10;
  }

for(i=0;i<10;i++)
 {
   if(frequency[i]>1)
   {
     //if one number appeared more than once
     flag=1;
   }
 }
 if(flag==0)
 //no repeated digit
  return false;
 else
 //repeated digit
  return true;


}

//main function
void main() {

int num = readNum();
if (num != 0){
int sum = sumDigits(num);
bool repDig = repDigit (num);
//Display msgs to the user
printf("Sum of digits is %d\n", sum);
if(repDig == true)
  printf("%d has at least one repeated digit\n", num);
else
  printf("%d has no repeated digit\n", num);
}
}
