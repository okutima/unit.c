/*
NAME:SANDRA KUYA
REG NO:PA106/G/28757/25
*/

//sales total
#include<stdio.h>
#include<stdlib.h>

int main()
{
        FILE *fptr;
        float sale,total=0.0;

        fptr=fopen("sales.txt","r");
        if (fptr==NULL){
                printf("Error opening sales.txt!\n");
                exit(1);
        }
        while(fscanf(fptr,"%f",& sale)==1){total+=
        sale;}

  printf("Total sales for the day: Kshs %2f \n",total);

fclose(fptr);


        return 0;
}