#include <stdio.h>

void print_smbg(void);

int main(void) {
	print_smbg();
	return 0;
}
void print_smbg(){
	int num1,num2,num3;
	printf("Please enter 3 number:\n");
	scanf("%d\n %d\n %d\n",&num1,&num2,&num3);
	if((num1>num2)&&(num1>num3)){
		printf("The largest number is %d",num1);
	}else if(num2>num3){
		printf("The largest number is %d",num2);
	}else{
		printf("The largest number is %d",num3);
	}

if((num1<num2)&&(num1<num3)){
	printf("The smallest number is %d",num1);
}else if(num2<num3){
	pritnf("The smallest number is %d",num2);
}else{
    pritnf("The smallest number is %d",num3);	
}

return 0;
}
