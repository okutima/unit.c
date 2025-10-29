/*
NAME:OKUTIMA SANDRA KUYA
REG NO:PA106/G/28757/25
DESCRIPTION:Displaying 1D Array and calculating sum and average
*/

#include <stdio.h>

int main(){

int i;
float average;
int sum=0;
int revenue [7]={1000,1500,2000,3600,4000,5000,7000};

for(i=0;i<7;i++){
printf("%d\t",revenue[i]);
sum+=revenue[i];
average=(float)sum/7;
}

printf("\nthe sum of the revenue is:\t%d",sum);
printf("\nthe average daily revenue is:\t%f",average);

return 0;
}