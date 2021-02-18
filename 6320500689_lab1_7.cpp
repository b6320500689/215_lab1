#include <stdio.h>
int main ()
{
    float time;
    scanf ("%f",&time);
    int t,ti,s,se;
    t=(time*100)/100;
    ceil (t) ;
    s=(time*100);
    se=s%100;
    if (t<12)
    {
        printf ("%d:%d a.m.",t,se);
    }
    else
    {
        ti=t-12;
        if(se==0)
        printf ("%d:%d%d p.m.",ti,se,se);
        else
        printf ("%d:%d p.m.",ti,se);
    }
    return 0;
}
