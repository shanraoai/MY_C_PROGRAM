#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *p=(int*)malloc(sizeof(int));
    *p=10;
    printf("value stored=%d\n",*p);
    free(p);
    }
    [or]
#include<stdio.h>
#include<stdlib.h>
 int main(){
    int *p=(int*)malloc(sizeof(int));
    if(p==NULL)
    {
        printf("memory not allocated\n");
    }
    *p=10;
    printf("value stored=%d\n",*p);
    free(p);
 }    
   
