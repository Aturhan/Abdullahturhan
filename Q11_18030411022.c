#include <stdio.h>

void digit_counter(void);

int main(void) {
	digit_counter();
	return 0;
}
void digit_counter(){
	long long number;
    int counter = 0;
    printf("Enter an integer: ");
    scanf("%lld", &number);
 
    while (number != 0) {
        number /= 10;    
        ++counter;
    }

    printf("Number of digits: %d", counter);
    
    return 0;
}
