// transpose matrix
#include <stdlib.h>
#include <stdio.h>
int main(){
    int a[3] [3]={1,2,3,4,5,6,7,8,9},i,j;
    int b[3] [3];
    printf("\nMatrix: -\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:-\n");
   
    // transpose logic
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            b[i] [j]=a[j] [i];
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            a[i] [j]=b[i] [j];
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }

    return 0;
}