/* n���� ������ ���� �迭�� �ִ�. �� �迭�� ���������� ���� ������ ��� ������ �ִ�. ���� ����� �� �迭�� �� Ư���� ������� �����ؾ� �Ѵ�.

������ �ǰ� �� ��, ���� ������ ���ʿ� ���������� ���ʿ� �־�� �Ѵ�. ���� ���������� ���������� �������� ������ ����� �Ѵ�. */
#include<stdio.h>
int main(void)
{
    int num[]={-1,1,3,-2,2};                
    int result[]={0};                       //����� �����ϱ� ���� �迭 ����
    int count=0;                            //���� ��ġ�� �����ϱ� ���� ����
    int num_size=sizeof(num)/sizeof(int);   //�迭�� ���̸� �˱� ���� ����
    for(int i=0;i<num_size;i++)             //���� ���� ���
    {
        printf("%d\t",num[i]);
    }
    printf("\n");

    for(int i=0;i<num_size;i++)                //���� ����
    {
        if(num[i]<0)

        {
            result[count]=num[i];
            count++;
        }
    }
    for(int i=0;i<num_size;i++)                 //��� ����
    {
        if(num[i]>0)
        {
            result[count]=num[i];
            count++;
        }
    }

    for(int i=0;i<num_size;i++)                 //����� ���
    {
        printf("%d\t",result[i]);
    }
}
