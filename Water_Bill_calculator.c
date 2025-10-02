/*
Name:Sandra Kuya Okutima
Reg no:PA106\G\28757/25
Description:Displaying water bill calculator
*/

#include<stdio.h>

int main () {
    float units;
    float bill1, bill2, bill3;

    printf("Enter the number of water units: ");
    scanf("%f", &units);

    bill1=units*20;
    bill2=units*25;
    bill3=units*30;


    if (units >=0 && units<=30){

    printf("your total bill KES is %.2f", bill1);
    }

    else if(units >=30 && units<=60)
     {

    printf("your total bill KES is %.2f", bill2);
    } 
	else if(units >60){
        printf("your total bill KES is %.2f", bill3);
    }

else{
    printf("invalid input");
}













return 0;

}
