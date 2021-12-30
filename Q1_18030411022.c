#include <stdio.h>

int main() {
	
    int n[6],i;

    for(i=0;i<6;i++)

        n[i]=(rand()%(49))+1;
    printf("Random numbers are : ");

    for(i=0;i<6;i++)

        printf("%d ",n[i]);
	return 0;
}
