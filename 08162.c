#include <stdio.h>
//输入数字
int main(){
    int ch=0;
    printf("请输入数字：");
    while((ch=getchar()) !=EOF)
    {
        if(ch<'0'||ch>'9')
            continue;
        putchar(ch);
    }

return 0;
}
