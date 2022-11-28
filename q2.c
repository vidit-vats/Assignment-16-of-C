// matrix multiplication 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[3] [3]={11,12,13,14,15,16,17,18,19};
    int b[3] [3]={1,2,3,4,5,6,7,8,9};
    int c[3] [3]={0,0,0,0,0,0,0,0,0},i,j;
    int r1=3,r2=3,c1=3,c2=3;
    int res=0;
    int k;
    printf("\nMatrix 1:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    printf("\nMatrix 2:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",b[i] [j]);
        }
        printf("\n");
    }
    printf("\n\n");
    
    if (c1!=r2)
    {
        printf("Matrix Multiplication is not possible\n");
        exit(1);
    }

    printf("Product of Matrix 1 and Matrix 2:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                res=a[i] [k]* b[k] [j]+res;
            }
            c[i] [j]=res;
            res=0;
        }
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",c[i] [j]);
        }
        printf("\n");
    }
    return 0;
}