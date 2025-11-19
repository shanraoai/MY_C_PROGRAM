#include<stdio.h>
int main(){
    int a[6]={1,4,7,5,2,8};
    int max=a[0];
    for(int i=1; i<6; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d",max);
}
