#include<stdio.h>
int main(){
int balance;
int withdraw;
printf("what is your balance:");
scanf("%d",&balance);

while(balance>0){
printf("how much do u wanna withdraw:\n");
scanf("%d",&withdraw);

if(withdraw>balance){
printf("sorry you don't have enough funds ˜­,you have ksh.%d\n", balance);
}
else{
balance-=withdraw;
printf("your new balance is ksh.%d\n", balance);
if(balance==0){
printf("you do not ave any funds");
}

}
}

return 0;
}

    