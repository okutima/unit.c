/*
NAME:SANDRA KUYA
REG NO:PA106/G/28757/25
DESCRIPTION:A PROGRAM TO DISPLAY BORROWED BOOKS
*/

#include<stdio.h>
#include<stdlib.h>

//borrowed_books

int main(){

        FILE* fptr;
        char title[100];
        char choice;

        fptr=fopen(" Borrowed_books.txt","a");
        if(fptr==NULL){
                printf("Error opening file!\n");
                exit(1);
                        }
                        do{
                                printf("Enter book title:");
                                fgets(title,sizeof(title),stdin);

                                //write to file
                                fprintf(fptr,"%s",title);
                                printf("Book title successfully stored!\n");

                                printf("Add another book?(y/n);");
                                scanf("%c",& choice);
                                getchar();                                
                                }
           while(choice=='y',choice=='Y');

                   fclose(fptr);

           printf("All tittles saved in borrowed_books.txt\n");
           return 0        ;

        }