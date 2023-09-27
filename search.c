#include<stdio.h>
int main()
{
    int i,j,n,m,s,count=0;
    printf("Total Case = ");
    scanf("%d",&n);
    printf("How many Numbers you want to  insert? :  ");
    scanf("%d",&m);
    int a[m];
    printf("Enter %d array elements : ",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter Data You want to search : ");
        scanf("%d",&s);
        count=0;
        for(j=0;j<m;j++)
        {
            if(s==a[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("%d is not found in the Array\n",s);
        else
            printf("%d is found at Index %d\n",s,j);
    }

}
