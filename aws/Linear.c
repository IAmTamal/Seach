#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sch,loc;
    scanf("%d",&sch);
    for(int i=0; i<n; i++)
    {
        if(a[i]==sch);
        loc = i+1;
    }

    printf("%d",loc);

return 0;
}