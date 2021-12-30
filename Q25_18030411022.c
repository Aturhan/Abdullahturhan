#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("\n\n");
    srand(time(0));
    int arr[10][10], min_rowindex = 0, min_colindex = 0;
    int i,j;
    for (i = 0; i < 10; i++)
    {
        for(j = 0;j<10;j++)
        {
            int num = (rand() %(100 - 1 + 1)) +1;
            arr[i][j] = num;
        }
    }
    int min = arr[0][0];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (arr[i][j]<min)
            {
                min = arr[i][j];
                min_rowindex = i;
                min_colindex = j;
            }
        }
    }

    printf("\nMatrix is: \n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nMinimum is in row %d, column %d",min_rowindex+1,min_colindex+1);
    printf("\n\n");
    return 0;
}

