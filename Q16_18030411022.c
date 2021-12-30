#include <stdio.h>
#include <stdlib.h>

void linear_search(int *,int);

int main()
{
    int arr[23];
    int i;
    printf("The randomly generated array is: ");
    for(i=0;i<23;i++){
       arr[i]=rand();  
       printf("%d ",arr[i]);  
    }
    
    int key =rand();  
    printf("\n\nRandomly generated key is: %d\n\n",key);  
    linear_search(arr,key); 
    return 0;
}

//function definition
void linear_search(int *arr,int key){
   int size=sizeof(arr)/sizeof(arr[0]);
   int i;
   for(i=0;i<size;i++){
      if(arr[i]==key){
         printf("%d found at index %d in the array.",key,i);
         return;
      }
   }
   printf("%d is not found in the array.",key);
}
