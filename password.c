#include<stdio.h>
int main(){
int password;
do{
printf ("what is the password:");
scanf("%d",&password);
if(password !=1234){
printf("access denied, please try again\n");
}
}
while(password != 1234);{
printf("access given ✅\n");
}
return 0;
}