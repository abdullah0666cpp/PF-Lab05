

#include<stdio.h>
int main(){
	int choice=0,quantity,bill=0,totalitems=0,discount=0,payable;
	while(choice!=4){
		printf("------------------------------------------------------------------------------\n");
		printf("Choice\t Item\t\tPrice(Rs)\n");
		printf("1\t Tea\t\t60\n2\t Samosa\t\t40\n3\t Sandwich\t180\n4\t Checkout\n");
		printf("------------------------------------------------------------------------------\n");
		printf("Enter Choice:");
		scanf("%d",&choice);
		
		if(choice==1){
			printf("Enter Quantity:");
			scanf("%d",&quantity);
			bill=bill+(60*quantity);
			totalitems=totalitems+quantity;
			printf("Current Bill: Rs %d\n",bill);
		}else if(choice==2){
			printf("Enter Quantity:");
			scanf("%d",&quantity);
			bill=bill+(40*quantity);
			totalitems=totalitems+quantity;
			printf("Current Bill: Rs %d\n",bill);
		}else if(choice==3){
			printf("Enter Quantity:");
			scanf("%d",&quantity);
			bill=bill+(180*quantity);
			totalitems=totalitems+quantity;
			printf("Current Bill: Rs %d\n",bill);
	} else if(choice==4){
		printf("Final Bill: Rs %d\n",bill);
	} else
		printf("Error please try again\n");
	}
	if(bill>1000){
		discount=bill*10/100;
		payable=bill-discount;
	printf("Payable amount: %d\n",payable);
	}else 
	printf("Payable amount: %d\n",bill);
	printf("Total Items: %d\n",totalitems);
	return 0;
}
