#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    char vicky[20];
    printf("enter a name:");
    scanf("%s",&name);
     strcpy(vicky,name);
     printf("%s\n",name);
     printf("%s",vicky);
}
