#include <stdio.h>
int main(){
    int a[10] [10];
    int i,j,count_z=0,count_nz=0;
    int row,col;
    printf("Enter Matrix Rows(less than 10): ");
    scanf("%d",&row);

    printf("Enter Matrix Column(less than 10): ");
    scanf("%d",&col);

    printf("Matrix: -\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            scanf("%d",&a[i] [j]);
        }
    }
    printf("\n");

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf("%d ",a[i] [j]);
        }
        printf("\n");
    }

    

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if (a[i] [j]==0)
            count_z++;

            else
            count_nz++;
        }
        printf("\n");
    }
printf("\nNo of Non Zero Elements: %d",count_nz);
printf("\nNo of Zero Elements: %d\n",count_z);

if (count_z>count_nz)
printf("\nSparse Matrix is entered\n");

else
printf("\nNon Sparse Matrix\n");
return 0;

}