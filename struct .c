#include <stdio.h>
int main() {
    struct virat{
        int age;
        float marks;
        char name;
    };
    struct virat k[3];
    for(int i=0; i<3; i++){
        printf("enter age ,marks & name:\n");
        scanf( "%d %f %s",&k[i].age,&k[i].marks,&k[i].name);
    }
}    
