/* n개의 정수를 가진 배열이 있다. 이 배열은 양의정수와 음의 정수를 모두 가지고 있다. 이제 당신은 이 배열을 좀 특별한 방법으로 정렬해야 한다.

정렬이 되고 난 후, 음의 정수는 앞쪽에 양의정수는 뒷쪽에 있어야 한다. 또한 양의정수와 음의정수의 순서에는 변함이 없어야 한다. */
#include<stdio.h>
#include<stdlib.h>
int sort(int *ptr, int num_size);           //정렬을 위한 함수
int add(int *size,int**num);
int main(void)
{
    int size=5;
    int *num=(int*)malloc(sizeof(int)*size);    //길이가 5인 배열 생성            
    int i=0;   
    int input=0;

    //-99가 입력될때까지 무한루프
    while(1)
    {
        printf("정수를 입력하세요. (-99입력시 종료)\n");
        scanf("%d",&input);
        //입력 값이 -99면 탈출
        if(input==-99)
            break;
        num[i]=input;
        //i+1번째가 size와 같으면 추가하기 위한 add함수 호출
        if(i+1==size)
        add(&size,&num);

        i++;
    }
    
    sort(num,size);

    free(num);

}

int add(int *size, int **num){

    int add_size = *size+1; //size의 크기를 1증가
    //main의 num보다 긴 배열 생성
    int *temp_num=(int*)malloc(sizeof(int)*add_size);
    //num의 값을 복사
    for(int i=0;i<*size;i++)
    {
        temp_num[i]=(*num)[i];
    }
    free(*num);         //이전 배열 삭제
    *num=temp_num;
    *size+=1;       //main의 size를 1증가

}

int sort(int *ptr, int num_size)
{
    int result[num_size];                       //결과를 저장하기 위한 배열 선언
    int count=0;                            //저장 위치를 지정하기 위한 변수
    
    for(int i=0;i<num_size;i++)                
    {
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    //음수 정렬
    for(int i=0;i<num_size;i++)                
    {
        if(*(ptr+i)<0)
        {
            result[count]=*(ptr+i);
            count++;
            
        }
    }
    //양수 정렬
    for(int i=0;i<num_size;i++)               
    {
        if(*(ptr+i)>=0)
        {
            result[count]=*(ptr+i);
            count++;
        }
    }
    for(int i=0;i<num_size;i++)                 //결과값 출력
    {

        printf("%d\t",result[i]);
    }
}
