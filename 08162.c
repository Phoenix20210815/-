#include <stdio.h>
//��������
int main(){
    int ch=0;
    printf("���������֣�");
    while((ch=getchar()) !=EOF)
    {
        if(ch<'0'||ch>'9')
            continue;
        putchar(ch);
    }

return 0;
}
