#include<stdio.h>

void  main() {
int num,digits=0,size,count_odd=0;
int attempt =1, sum,num2,orgi_num;


while (attempt <= 10){

printf ("Enter pin code (attempt %d):", attempt);
scanf ("%d",&num);

orgi_num = num;//keeps orginal number
num2 = num;//keeps orginal number

//counts the number of digits entered
while (num != 0){
  num /= 10;
  digits++;
}
int array[digits] ;//array
//puts digits into array
for (int i = digits-1; i >= 0; i--) {
    array[i] = num2 % 10;
    num2 /= 10;
}
//adds numbers and checks if odd
for (int j =0; j<= digits-1 ; j++){
sum = sum + array [j];
if (array [j]%2 == 1){
  count_odd++;
}
}
//output
if (digits == 6 && count_odd == 0 && sum <= 30 ){
  printf("Congratulation, code %d is valid!\n",orgi_num);
  break;
}else {
    printf("Code %d is invalid!\n",orgi_num);
    //reset
    sum =0 ;
    digits =0;
    count_odd =0;
    attempt++;
}
}


}
