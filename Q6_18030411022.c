#include <stdio.h>

void is_perfect(void);

int main(void) {
	is_perfect();
	return 0;
}
void is_perfect(){
		int i, num, sum =0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	for(i=1; i<num; i++){
		if(num % i ==0){
			sum = sum +i;
	}
		}
		if(sum == num){
			printf("%d is perfect number",num);
		}else{
			printf("%d is not perfect number",num);
		}
	
	
	return 0;
}
