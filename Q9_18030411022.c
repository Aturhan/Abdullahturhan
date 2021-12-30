#include <stdio.h>

void turn_to_letter(void);

int main(void) {
	turn_to_letter();
	return 0;
}
void turn_to_letter(){
		int visa,final;
	
	printf("Please enter visa point:\n");
	scanf("%d",&visa);
	printf("Please enter final point:\n");
	scanf("%d",&final);
	double score = ((0.4*visa)+(0.6*final));
    
     if(score<50){
    	printf("F");
	}else if(score==50 && score<=59){
		printf("D");
	}else if(score==60 && score<=69){
		printf("C");
	}else if(score ==70 && score<=79){
		printf("B");
	}else if(score>=80){
		printf("A");
	}
   return 0;
}
