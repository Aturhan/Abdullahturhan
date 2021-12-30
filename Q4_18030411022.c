#include <stdio.h>
void print4_7(void);

int main(void){
	print4_7();
	return 0;
}
void print4_7(){

int start,end,number;

printf("Enter start:\n");
scanf("%d",&start);
printf("Enter end:\n");
scanf("%d",&end);


	while(number<=end){
		number++;
		if(number%4 == 0 || number%7 == 0){
			printf("\n%d",number);
			
		}
	}
return 0;
}

	

