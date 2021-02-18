#include <stdio.h>
int main()
{
    int num,i,j,max=0;
    scanf("%d",&num);
    int a[num];
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for (i=1;i<num;i++)
    {
    	if(a[i]>=max)
        {
            max=a[i];
            j=i;
        }
	}
        
    printf("%d %d",j+1,max);
    return 0;
}
