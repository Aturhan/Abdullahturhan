#include <stdio.h>

void even_odd(void);

int main(void) {
	even_odd();
	return 0;
}
void even_odd(){

int num;
printf("Enter an integer:\n");
scanf("%d",&num);
if(num %2 == 0){
	printf("This number is even");
	
}else{
	printf("This number is odd");
}
return 0;
}
