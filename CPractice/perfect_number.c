#include<stdio.h>
int main(void){
    int n_input,sum=0;
    printf("������ �Է��ϼ��� "); 
    scanf("%d",&n_input);                   //���� �ϳ��� �Է�
    for(int num=1;num<=n_input;num++)       //1���� �Էµ� ���ڱ��� �ݺ�
    {
        for(int n=1;n<num;n++)              //1���� num���� �ݺ�
        {
            if((num%n)==0)                  //num�� ����� �� ���ϱ�
            {
                sum+=n;            
            }
        }
        if(sum==num)                        //������ �ϰ�� ���, sum �� �ʱ�ȭ
        {
            printf("%d \n",num);
            sum=0;
        }
        else sum=0;                         //������ �ƴ� ��� sum �ʱ�ȭ
    }
}