/*
NAME: SANDRA KUYA OKUTIMA
REG NUMBER: PA106/G/28757/25
DWSCRIPTION: PROGRAM TO DISPLAY DATA BUNDLES PURCHASE
*/

#include<stdio.h>
  int main(){
	  int data_bundles;
	  int cost;
	  int number;
	  
  printf("Select your data_bundles: \n");
  printf("\n 1. 100MB @50 KES");
  printf("\n 2. 500MB @200 KES");
  printf("\n 3. 1GB @350 KES");
  printf("\n 4. 2GB @600 KES");
  
  printf("\n Enter your choice(1-4): ");
  scanf("%d",&number);
  
  switch(number){
 	  case 1:
	  cost=50;
	  printf("You seleced 100MB bundle,cost=%d KES\n",cost);
	  break;
      case 2:
	  cost=200;
	  printf("You selected 500MB bundle,cost=%d KES\n",cost);
	  break;
      case 3:
      cost=350;
      printf("You selected 1GB bundle,cost=%d KES\n",cost);
      break;
      case 4:
      cost=600;
      printf("You selected 2GB bundle,cost=%d KES\n",cost);
	  break;
      default:
      printf("Invalid choice!Please select between 1 and 4\n");
	  }
      
      return 0;
  }