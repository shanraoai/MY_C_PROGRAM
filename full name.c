#include <stdio.h>
int main(){
  char first[30]="shanrao", last[30]="pawar", full[60];
  int i=0, j=0, length=0, maxlength=20;
  while(first[i]!='\0'){
      full[length]=first[i];
      i++;
      length++;
    }
    full[length]=' ';
    length++;
     while(last[j]!='\0'){
      full[length]=last[j];
      j++;
      length++;
     }
     full[length]='\0';
     if(length<= maxlength){
         printf("%s\n",full);
         printf("length of full name:%d\n",length);
         printf("fit un screen!\n");
     }else{
         printf("%s\n",full);
         printf("length of full name:%d\n",length);
         printf(" does not fit un screen!\n");
     }     
     }
