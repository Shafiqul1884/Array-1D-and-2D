#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int large,small;
    large=a[0];
    for(i=1;i<n;i++)
    {
        if(a[0]<a[i])
        {
            large=a[i];
        }
    }
    small = a[0];
    for(i=1;i<n;i++)
    {
        if(a[0]>a[i])
        {
            small=a[i];
        }
    }
    printf("largest number is : %d\n",large);
    printf("smallest number is : %d\n",small);

}
