#include<stdio.h>
#include<string.h>
   int main(){
     char virat[18];
     printf("enter your string\n");
     scanf("%s",&virat );
     printf("before concat %s\n", virat);
     strcat(virat, " goat");
     printf("after concat %s\n", virat);
}     
