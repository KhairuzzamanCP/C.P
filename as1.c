#include <stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);
    for (int i=n;i<=1;i++)
    {
        if (n<=0)
        printf("%d ",i);
    }
    for (int i=0;i<n;i++)
    {
        if(n<0)
        printf("%d ",i);
    }
    return 0;
}
