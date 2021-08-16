#include <stdio.h>

int main(){

int ret=0;
int ch=0;
char password[20] = {0};
printf("请输入密码：>");
    scanf("%d",password);
//缓冲区还剩一个'\n'，用下面循环读取'\n'
    while((ch=getchar())!='\n')
    {
           ;
    }
printf("请确认（Y/N）:>");
    ret = getchar();
    if(ret=='Y')
        printf("确认成功\n");
    else
        printf("放弃确认\n");

return 0;
}
