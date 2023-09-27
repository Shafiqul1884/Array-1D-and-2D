#include<stdio.h>
int main()
{
    int i,j,rows,cols,sum=0;
    printf("Make a squire matrix for diagonal sum.\n");
    printf("Enter rows number = ");
    scanf("%d",&rows);
    printf("Enter cols number = ");
    scanf("%d",&cols);
    int m[rows][cols];
     if(rows == cols)
    {
    printf("Enter matrix element : \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d",m[i][j]);
            printf("  ");
        }
        printf("\n");
    }

            for(i=0;i<rows;i++)
            {
                for(j=0;j<cols;j++)
                {
                    if(i==j)
                    {
                        sum = sum + m[i][j];
                    }
                }
            }
            printf("The sum of main diagonal is = %d\n",sum);
    }
    else
        printf("Your matrix is not a squire matrix.\n please try again.");



}
