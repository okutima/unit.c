/*
NAME:OKUTIMA SANDRA KUYA
REG NO:PA106/G/28757/25
DESCRIPTION:Displaying 2D Array
*/

#include <stdio.h>

int main(){

int i,j;
int occupance[5][10]={
{1,1,1,0,0,0,1,0,1,1},
{1,1,1,0,0,0,1,0,1,1},
{1,1,1,0,0,0,1,0,1,1},
{1,1,1,0,0,0,1,0,1,1},
{1,1,1,0,0,0,1,0,1,1}
};

for(i=0;i<5;i++){
for(j=0;j<10;j++){
printf("%d\t",occupance[i][j]);
}
printf("\n");
}
return 0;
}