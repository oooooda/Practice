/* 입력 : 총건수(m), 한페이지에 보여줄 게시물수(n) (단 n은 1보다 크거나 같다. n >= 1)
출력 : 총페이지수 */
#include<stdio.h>
int main(void){
    int m,n,page;
    printf("총 건수를 입력하세요\n");
    scanf("%d",&m);                                     //총 건수 입력
    printf("한페이지의 게시물 수를 입력하세요\n");
    scanf("%d",&n);                                  //한 페이지당 보여지는 게시물 수 입력

    if(n>0)
    {
        if(m==0) page=0 ;                           //총 건수가 0일 경우 0페이지
        else if(m<n) page=1;                        //총 건수가 게시물 수보다 작을경우 1페이지
        else{                                                       
            page=((m%n)==0)? m/n:m/n+1;             //클경우 페이지수를 구하기 위한 삼항연산자
        }
        printf("총 페이지 수는 %d 입니다 \n",page);
    }

    
}