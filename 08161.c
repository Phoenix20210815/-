#include <stdio.h>

int main(){

int ret=0;
int ch=0;
char password[20] = {0};
printf("���������룺>");
    scanf("%d",password);
//��������ʣһ��'\n'��������ѭ����ȡ'\n'
    while((ch=getchar())!='\n')
    {
           ;
    }
printf("��ȷ�ϣ�Y/N��:>");
    ret = getchar();
    if(ret=='Y')
        printf("ȷ�ϳɹ�\n");
    else
        printf("����ȷ��\n");

return 0;
}
