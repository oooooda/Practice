//1000미만의 자연수에서 3,5d의 배수 총합
#include<iostream>
using namespace std;

int main(void){
    int num=0;            //총합을 구하기 위한 변수
    for(int i=1;i<1000;i++){
        if(i%5==0||i%3==0)
        num +=i;
    }
    cout<<num;
}