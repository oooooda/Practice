/* n���� ������ ���� �迭�� �ִ�. �� �迭�� ���������� ���� ������ ��� ������ �ִ�. ���� ����� �� �迭�� �� Ư���� ������� �����ؾ� �Ѵ�.

������ �ǰ� �� ��, ���� ������ ���ʿ� ���������� ���ʿ� �־�� �Ѵ�. ���� ���������� ���������� �������� ������ ����� �Ѵ�. */
#include<stdio.h>
#include<stdlib.h>
int sort(int *ptr, int num_size);           //������ ���� �Լ�
int add(int *size,int**num);
int main(void)
{
    int size=5;
    int *num=(int*)malloc(sizeof(int)*size);    //���̰� 5�� �迭 ����            
    int i=0;   
    int input=0;

    //-99�� �Էµɶ����� ���ѷ���
    while(1)
    {
        printf("������ �Է��ϼ���. (-99�Է½� ����)\n");
        scanf("%d",&input);
        //�Է� ���� -99�� Ż��
        if(input==-99)
            break;
        num[i]=input;
        //i+1��°�� size�� ������ �߰��ϱ� ���� add�Լ� ȣ��
        if(i+1==size)
        add(&size,&num);

        i++;
    }
    
    sort(num,size);

    free(num);

}

int add(int *size, int **num){

    int add_size = *size+1; //size�� ũ�⸦ 1����
    //main�� num���� �� �迭 ����
    int *temp_num=(int*)malloc(sizeof(int)*add_size);
    //num�� ���� ����
    for(int i=0;i<*size;i++)
    {
        temp_num[i]=(*num)[i];
    }
    free(*num);         //���� �迭 ����
    *num=temp_num;
    *size+=1;       //main�� size�� 1����

}

int sort(int *ptr, int num_size)
{
    int result[num_size];                       //����� �����ϱ� ���� �迭 ����
    int count=0;                            //���� ��ġ�� �����ϱ� ���� ����
    
    for(int i=0;i<num_size;i++)                
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    //���� ����
    for(int i=0;i<num_size;i++)                
    {
        if(*(ptr+i)<0)
        {
            result[count]=*(ptr+i);
            count++;
            
        }
    }
    //��� ����
    for(int i=0;i<num_size;i++)               
    {
        if(*(ptr+i)>=0)
        {
            result[count]=*(ptr+i);
            count++;
        }
    }
    for(int i=0;i<num_size;i++)                 //����� ���
    {

        printf("%d\t",result[i]);
    }
}
