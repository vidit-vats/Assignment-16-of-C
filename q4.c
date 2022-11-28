// sum of right diagonals 
#include <stdio.h>
int main(){
    int a[3] [3]={11,12,13,14,15,16,17,18,19},i,j,sum=0;
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
            if (j==i)
            sum=sum+a[i] [j];
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}