#include <stdio.h>
#include <stdlib.h>

void reverse_order(void);

int main(void) {
	reverse_order();
	return 0;
}

void reverse_order(){
	
	int i,number[5];
	
	for(i=1; i<=5; i++){
		printf("Enter 5 integer:\n",i);
		scanf("%d",&number[i]);
	}
	for(i=5; i>0; i--){
		printf("%d\n",number[i]);
	}
	return 0;
}
