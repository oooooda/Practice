//1000�̸��� �ڿ������� 3,5d�� ��� ����
#include<iostream>
using namespace std;

int main(void){
    int num=0;            //������ ���ϱ� ���� ����
    for(int i=1;i<1000;i++){
        if(i%5==0||i%3==0)
        num +=i;
    }
    cout<<num;
}