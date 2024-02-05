#include<stdio.h>
int main ()
{
    int i,j,n;

    printf("no. of elements: ");
    scanf("%d",&n);

    int a[n][2];

    printf("enter the elements: ");
    for (i=0;i<n;++i)
    {
        for (j=0;j<2;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;++i)
    {
        for (j=0;j<2;++j)
            {
                printf("[%d]\t",a[i][j]);
            }
        printf("\n");
    }

    return 0;
}