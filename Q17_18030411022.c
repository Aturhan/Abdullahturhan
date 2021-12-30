#include <stdio.h>

int main()
{   
    int size=5;
    int array[5]={1,2,3,4,5};
    int start=0;
    int end=size-1;
    int i;
    while(start<end)
    {
        int temp=array[start];
            array[start]=array[end];
            array[end]=temp;
            start++;
            end--;
    }
  for(i=0;i<size;i++)
  {
      printf("%d", array[i]);
  }
    return 0;
}
