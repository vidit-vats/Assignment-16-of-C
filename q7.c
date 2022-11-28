// lower triangular matrix
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[3] [3]={21,22,23,24,25,26,27,28,29},i,j;

    printf("\nMatrix:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Lower Triangular Matrix:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (i<j && j<=2)
            printf("%d ",a[i] [j]);

            else
            printf("   ");
        }
        printf("\n");
    }
    return 0;
}