//1000�̸��� �ڿ������� 3,5d�� ��� ����
#include<stdio.h>

int main(void){
    int num=0;            //������ ���ϱ� ���� ����
    register i;         //1000�� �ݺ��ϱ� ���� ����
    for(i=1;i<1000;i++){
        if(i%5==0||i%3==0)
        num +=i;
    }
    printf("%d",num);
}