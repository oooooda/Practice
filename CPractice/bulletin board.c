/* �Է� : �ѰǼ�(m), ���������� ������ �Խù���(n) (�� n�� 1���� ũ�ų� ����. n >= 1)
��� : ���������� */
#include<stdio.h>
int main(void){
    int m,n,page;
    printf("�� �Ǽ��� �Է��ϼ���\n");
    scanf("%d",&m);                                     //�� �Ǽ� �Է�
    printf("���������� �Խù� ���� �Է��ϼ���\n");
    scanf("%d",&n);                                  //�� �������� �������� �Խù� �� �Է�

    if(n>0)
    {
        if(m==0) page=0 ;                           //�� �Ǽ��� 0�� ��� 0������
        else if(m<n) page=1;                        //�� �Ǽ��� �Խù� ������ ������� 1������
        else{                                                       
            page=((m%n)==0)? m/n:m/n+1;             //Ŭ��� ���������� ���ϱ� ���� ���׿�����
        }
        printf("�� ������ ���� %d �Դϴ� \n",page);
    }

    
}