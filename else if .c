#include<stdio.h>
int main(){
    int marks=60;
    if(marks>90){
        printf("merit");
    }
    else if(marks>=80){
        printf("distinction");
    }
    else if(marks>=70){
        printf("good");
    }
    else if(marks>=60){
        printf("average");
    }
    else if (marks>=50){
        printf("just pass");
    }
    else{
        printf("fail");
    }
 }  
    
    
