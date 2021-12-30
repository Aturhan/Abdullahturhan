#include <stdio.h>
void arrmin(int a[],int num_elements);
void arrmax(int a[], int num_elements);
void arraver(int a[],int num_elements);
 
int main(void)
{
   int a[20],c,min,max;
   float avg;
   printf("Enter 20 numbers of elements in array\n");
for (c = 0; c < 20; c++)
    scanf("%d", &a[c]);
 
   min=max=a[0];
arrmax(a,a[20]);
   printf("Maximum value is %d\n", max);
 
 
arrmin(a,a[20]);
   printf("Minimum value is %d\n", a[20]);
 
  arraver(a,a[20]);
   printf("Average value is %f\n", a[20]);
 
   getch();
}
 
void arrmax(int a[], int num_elements)
{
   int i, max;
   for (i=0; i<num_elements; i++)
   {
   if (a[i]>max)
   {
        max=a[i];
   }
   }
 
   return(max);
}
void arrmin(int a[], int num_elements)
{
   int i, min;
   for (i=0; i<num_elements; i++)
   {
   if (a[i]<min)
   {
        min=a[i];
   }
   }
 
   return(min);
}
 
void arraver(int a[], int num_elements)
 
{ int sum,i;
float avg;
   sum=0;
avg=0;
 
   for (i=0; i<num_elements;i++)
   {
   sum=sum+a[i];
     avg=(float)sum/(i+1);
      }
return(avg);
}

