#include <stdio.h>
//从大到小输出
int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d%d%d",&a,&b,&c);
     //算法实现
     //a中放最大值
     //b中放中间值
     //c中放最小值
     if(a<b)
     {
         int tmp=a;
         a=b;
         b=tmp;
     }
     if(a<c)
     {
         int tmp=a;
         a=c;
         c=tmp;
     }
     if(b<c)
     {
         int tmp=b;
         b=c;
         c=tmp;
     }
    printf("%d %d %d",a,b,c);

    return 0;
}
