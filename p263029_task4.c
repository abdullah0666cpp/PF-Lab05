#include<stdio.h>
int main(){
	int students,marks,i,passed=0,failed=0,counter,highest,total_marks=0;
	float avg;
	printf("Enter the number of students:");
	scanf("%d",&students);
	for(i=1;i<=students;i++){
		printf("Enter Marks of student %d from (0 to 100):",i);
		scanf("%d",&marks);
		total_marks=total_marks+marks;
	if(marks>highest){
		highest=marks;
	}
	 if(marks>=50){
		passed++;	
	}else
		failed++;
}  avg = total_marks/students;
	printf("Total Students Passed: %d\n",passed);
	printf("Total Students failed: %d\n",failed);
	printf("Highest marks: %d\n",highest);
	printf("Average Marks: %.2f",avg);
	 return 0;
}
