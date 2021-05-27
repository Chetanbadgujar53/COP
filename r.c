#include<stdio.h>
#define greater(a,b) (a>b)?a:b
int main(void)
{
    int x=3,y=4,z;
    z=max(++x,y++);//      (++x>y++)?++x:y++  ==(4>4)?5:6
    printf("%d%d%d",x,y,z);    
    return 0;
}
// heance output will be x=4 y=6 z=5