#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter how many number you want insert : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            printf("0 is nonnegative number\n");
    }
    printf("Positive numbers are : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
            printf("%d, ",a[i]);
    }
    printf("\nNegative numbers are : \n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
            printf("%d, ",a[i]);
    }

}
