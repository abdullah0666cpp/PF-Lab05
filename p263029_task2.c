#include<stdio.h>
int main(){
	int current_savings,laptop,monthly_savings,total=0,i=0;
	printf("Enter Laptop price:");
	scanf("%d",&laptop);
	printf("Enter Current savings:");
	scanf("%d",&current_savings);
	if(current_savings>=laptop)
		printf("Sara's currrent savings are enough to buy the laptop right now");
	else{
		while(total<laptop){
			i++;
			printf("Month %d Savings:",i);
			scanf("%d",&monthly_savings);
			total=total+current_savings+monthly_savings;	
		} printf("You can buy the laptop after %d Months\n",i);
		printf("Total = %d",total);
	
		
	} return 0;
}
