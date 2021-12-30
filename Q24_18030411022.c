#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n\n");
    srand(time(0));
    int arr[10][10], min_rowindex = 0, min_colindex = 0;
    int i,j;
    for (i = 0; i < 5; i++)
    {
        for(j = 0;j<5;j++)
        {
            int num = (rand() %(100 - 1 + 1)) +1;
            arr[i][j] = num;
        }
    }
    
    printf("\nMatrix is: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0,a=0;
    for (i = 0; i < 5; ++i)
    {
        sum = sum + arr[i][i];
        a = a + arr[i][5 - i - 1];
    }

    printf("\nThe sum of the main diagonal elements is = %d\n", sum);
    printf("The sum of the off diagonal elements is   = %d\n", a);
    printf("\n\n");
    return 0;
}
