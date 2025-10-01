/*
Name:Sandra kuya okutima
Reg no:PA106/G/28757/25
Description: Displaying exam eligibility of students
*/
#include<stdio.h>



int main() { //main fuction
    int attendance;
    int average;

    printf("Enter the attendance of the student: ");
    scanf("%d", &attendance);

    printf("Enter average of the student: ");
    scanf("%d", &average);

    if(attendance>=75 && average>=40){
        printf("the student is eligible");

    }else{
        printf("the student not eligible");
    }

return 0;
}
