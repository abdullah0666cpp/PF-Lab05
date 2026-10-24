#include<stdio.h>
int main(){
	int pin,i=3;
	printf("=======ATM PIN VERIFICATION========\n");
	printf("\n");
	while(i>=1){
		printf("ENTER PIN NUMBER:\n");
		scanf("%d",&pin);
		if(pin==4321){
		printf("Access Granted\n");
		break;
		}else{
			i--;
			printf("Access Denied - %d Attempts left\n",i);	
			
		} 
	}  
		if(i<1){
		printf("Card Locked. Please contact your bank.");
	} return 0;
}
	

