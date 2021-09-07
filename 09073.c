#include <stdio.h>
//给定两个数，求着两个数的最大公约数
//辗转相除法
int main()
{
    int m=24;
    int n=18;
    int r=0;
    scanf("%d%d",&m,&n);
    while(r=m%n)
    {
        //r=m%n;
        m=n;
        n=r;
    }
    printf("%d\n",n);
    return 0;
}
