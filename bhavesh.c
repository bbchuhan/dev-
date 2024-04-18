#include<stdio.h>
int main(){
	int grade;
	printf("enter the stundent 's grade:");
	scanf("%d",&grade);
	if(grade>=90){
		printf("a");
		
	}else if (grade >= 80 && grade <= 89){
		printf("b");
	}else if (grade >=70 && grade <=79){
		printf("c");	
	}else if (grade >=60 && grade <= 69){
		printf("d");
	}else {
		printf("f");
	}
}