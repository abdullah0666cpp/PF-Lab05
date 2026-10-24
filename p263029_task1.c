#include<stdio.h>
int main(){
	int i,score,bounderies=0,dot,total,sum=0;
	for(i=1;i<=6;i++){
		printf("Enter Runs on ball %d:\t",i);
		scanf(" %d",&score);
		total=total+score;
	if(score==4 || score==6){
		bounderies=bounderies+1;
		printf("Total Boundaries: %d\n",bounderies);
}	if(score==0){
		dot=dot+1;
		printf("Total Dotballs: %d\n",dot);
}	
} printf("Total score: %d",total);  

	return 0;
}
