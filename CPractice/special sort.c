/* n개의 정수를 가진 배열이 있다. 이 배열은 양의정수와 음의 정수를 모두 가지고 있다. 이제 당신은 이 배열을 좀 특별한 방법으로 정렬해야 한다.

정렬이 되고 난 후, 음의 정수는 앞쪽에 양의정수는 뒷쪽에 있어야 한다. 또한 양의정수와 음의정수의 순서에는 변함이 없어야 한다. */
#include<stdio.h>
int main(void)
{
    int num[]={-1,1,3,-2,2};                
    int result[]={0};                       //결과를 저장하기 위한 배열 선언
    int count=0;                            //저장 위치를 지정하기 위한 변수
    int num_size=sizeof(num)/sizeof(int);   //배열의 길이를 알기 위한 변수
    for(int i=0;i<num_size;i++)             //원래 값을 출력
    {
        printf("%d\t",num[i]);
    }
    printf("\n");

    for(int i=0;i<num_size;i++)                //음수 정렬
    {
        if(num[i]<0)

        {
            result[count]=num[i];
            count++;
        }
    }
    for(int i=0;i<num_size;i++)                 //양수 정렬
    {
        if(num[i]>0)
        {
            result[count]=num[i];
            count++;
        }
    }

    for(int i=0;i<num_size;i++)                 //결과값 출력
    {
        printf("%d\t",result[i]);
    }
}
