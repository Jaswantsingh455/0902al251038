

#include <stdio.h>

int main()
{
    int a[100],n,i;
    int expectedsum,actualsum=0;
    int missing;

    printf("Enter the value of n:");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n-1);

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        actualsum=actualsum + a[i];
    }

    expectedsum = n*(n+1)/2;
    missing=expectedsum-actualsum;

    printf("Missing number=%d\n",missing);

    return 0;
}


   