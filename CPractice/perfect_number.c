#include<stdio.h>
int main(void){
    int n_input,sum=0;
    printf("정수를 입력하세요 "); 
    scanf("%d",&n_input);                   //숫자 하나를 입력
    for(int num=1;num<=n_input;num++)       //1부터 입력된 숫자까지 반복
    {
        for(int n=1;n<num;n++)              //1부터 num까지 반복
        {
            if((num%n)==0)                  //num의 약수와 합 구하기
            {
                sum+=n;            
            }
        }
        if(sum==num)                        //완전수 일경우 출력, sum 값 초기화
        {
            printf("%d \n",num);
            sum=0;
        }
        else sum=0;                         //완전수 아닐 경우 sum 초기화
    }
}