// sum of left diagonal
#include <stdio.h>
int main(){
    int a[3] [3]={1,2,3,4,5,6,7,8,9},i,j,sum=0;
    printf("Matrix 1:-\n");

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if (j==2-i)
            sum=sum+a[i] [j];
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}