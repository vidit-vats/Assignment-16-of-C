#include <stdio.h>
int main(){
    int a[3] [3]={1,1,12,0,1,0,12,13,14};
    int i,j,count_r,max;
    int count[3];

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

    for (i=0;i<3;i++)
    {
        count[i]=0;
        for (j=0;j<3;j++)
        {
            if (a[i] [j]==1)
            count[i]++;
        }
    }

    printf("\n\n");

    for (i=0;i<3;i++)
    printf("1s in Row %d: %d\n",i+1,count[i]);

// code for max no of 1 starts here
for (i=0;i<3;i++)
    {
        max=count[i];
        for (j=0;j<3;j++)
        {
            if (max<count[j])
            {
                max=count[j];
            }
        }
    }

    printf("\n Max Count: %d\n",max);

return 0;
}
