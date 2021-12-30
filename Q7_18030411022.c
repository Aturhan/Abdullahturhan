#include <stdio.h>

void factorial(void);

int main(void) {
	factorial();
	return 0;
}
void factorial(){
		int  num,i;
	int fact =1;

	printf("Enter an integer:\n");
	scanf("%d",&num);
	if(num<0){
		printf("Error!");
	}else{
	for(i= 1; i<=num; ++i){
		fact *= i;
	}
}
printf("Factorial:\n %d",fact);
	
	return 0;
}
