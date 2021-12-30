#include<stdio.h>
#include<stdlib.h>

int numOfSearched(int ar[], int n)         
{
    int count = 0;                         
    int i;
    for(i=0; i<1000; i++)               
    {
        if(ar[i] == n)                      
            count += 1;                    
    }
    return count;                          
}

int main()                                                                           
{
    int x, arr[1000], num, frequency,i;                                                

    for(i=0; i<1000; i++)                                                        
    {
        x = rand() % 101;                                                             
        arr[i] = x;                                                                 
    }
    printf("The the value to be searched in the array: ");                           
    scanf("%d", &num);                                                              

    frequency = numOfSearched(arr, num);                                             
    printf("The number of times %d present in the array is = %d", num, frequency);   
}
