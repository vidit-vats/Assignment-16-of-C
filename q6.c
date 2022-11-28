// sum of rows and sum of columns
#include <stdio.h>
int main(){
    int a[3] [3]={1,2,3,4,5,6,7,8,9},i,j;
    int sum_r=0,sum_c=0;
    int k;

    printf("\nMatrix:-\n");

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            sum_r=a[i] [j]+sum_r;
            
        }
        printf("Sum of Row %d: %d\n",i+1,sum_r);
        sum_r=0;
    }

printf("\n");
for (i=0;i<3;i++)
{
        for (j=0;j<3;j++)
            sum_c=a[j] [i]+sum_c;

 printf("Sum of Column %d: %d\n",i+1,sum_c);
 sum_c=0;
}
   
    return 0;
}