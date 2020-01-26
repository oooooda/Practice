#include<stdio.h>

int main(void){

int count[10]={0};
    for(int i=1;i<1001;i++){
        if (i<10){
            count[i]+=1;
        }
        else if(i<100){
            count[i%10]+=1;
            count[i/10]+=1;
        }
        else if(i<1000){
            count[i/100]+=1;
            count[(i%100)/10]+=1;
            count[(i%100)%10]+=1;
        }
        else{
            count[i/1000]+=1;
            count[(i%1000)/100]+=1;
            count[(i%1000)/10]+=1;
            count[(i%1000)%10]+=1;
        }
    }
for(int j=0;j<10;j++){
    printf("%d\n",count[j]);
}
}