#include <stdio.h>
#include <stdlib.h>


int comparator (const void * x, const void * y) {
   return ( *(int*)x - *(int*)y );
}



int main()
{
    int arr[30];  
    int i;
    printf("Enter the heignt of 30 people : ");
    for( i=0; i<30; i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr, 30, sizeof(int), comparator);
    
    printf("\nThe longest 5 lengths are : ");
    for(
	i=29; i>=25; i--){
        printf("%d ",arr[i]);
    }
    printf("\nThe shortest 5 lengths are : ");
    for( i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
