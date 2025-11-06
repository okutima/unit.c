/*
NAME:SANDRA KUYA OKUTIMA 
REG NO:PA106/G/28757/25
DATE:3/11/2025
*/

//students_results

#include<stdio.h>
#include<stdlib.h>

struct student{
        char name[50];
        int regNo;
        float marks;
};

int main()
{
        FILE *fptr;
        struct student s;
        char choice;

        //write student records

        fptr=fopen("results.dat","ab");

        if (fptr==NULL){
                printf("Error opening file!\n");

                exit(1);
        }
        do{
        printf("Enter student name:");
        fgets(s.name,sizeof(s.name),stdin);
        printf("Enter registration number:");
        scanf("%d",& s.regNo);
        printf("Enter total marks:");
        scanf("%f",& s.marks);
        getchar();

        fwrite(&s, sizeof(struct student),1,fptr);
        printf("Record saved!\n");

        printf("Add another record?(y/n):");
        scanf("%c", & choice);
        getchar();
        }
        while(choice=='y' ,choice=='Y');
        fclose(fptr);

//Read and display all students records

fptr=fopen("results.dat","rb");
if(fptr==NULL){
        printf("Error opening file for reading!\n");
}

printf("students records \n");
while(fread(&s,sizeof(struct student),1,fptr)){

        printf("Name:%s",s.name);
        printf("Reg No:%d\n",s.regNo);
        printf("Marks:%.2f\n\n",s.marks);

        }
fclose(fptr);

        return 0;

}