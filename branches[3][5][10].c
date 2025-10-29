/*
Name:Okutima Sandra Kuya
Reg No:PA106\G\28757\25
DESCRIPTION:This program creates a 3D array to represent branches, floors, and rooms in a hotel.
*/

#include <stdio.h>

int main(){

int i,j,k;
int occupied=0;
int empty=0;
int branches[3][5][10]={
{
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1}
},
{
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1}

},
{
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1},
{1,1,1,0,0,0,1,0,0,1}
}
};

for(i=0;i<3;i++){
printf("branch:%d\n",i+1);
for(j=0;j<5;j++){
for(k=0;k<7;k++){
printf("%d\t",branches[i][j][k]);
if(branches [i][j][k]==1){
occupied++;
}
}
printf("\n");
}
printf("\n");
}


printf("the total number of occupied room (with 1):%d\n",occupied);

return 0;
}