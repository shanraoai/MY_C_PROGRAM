#include<stdio.h>
int main(){
   int choice,id;
   printf("1.pan number\n");
   printf("2.aadhar number\n");
   printf("3. appar id\n");
   printf("4.driving license\n");
   printf("5.passport\n");
   printf("enter a choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:printf("pan number");
       break;
       case 2:printf("aadhar number");
       break;
       case 3:printf("appar id");
       break;
       case 4:
       printf("driving licencse");
       break;
       case 5:printf("passport");
       break;
       default:
       printf("not verified");
   }
}
