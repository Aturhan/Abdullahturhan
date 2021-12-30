#include <stdio.h>
#include <stdlib.h>
 
void print(int arr[], int size) {
    printf("Printing array : \n");
    int i;
    for(i=0;i<size;i++) 
        printf("%d ",arr[i]);
    printf("\n");
}
int main () {

    int n = 23;
    int arr[n];
    int i;

    for(i=0;i<n;i++) {
        
        arr[i] = rand()%100;
    }

    print(arr, n);
    return 0;
}
