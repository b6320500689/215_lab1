#include <stdio.h>
int main()
{
    int num,i,max=0;
    scanf("%d",&num);
    int a[num];
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
