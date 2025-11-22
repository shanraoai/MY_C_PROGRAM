#include <stdio.h> 
union raju {
    int i;
    float f;
 };
int main() {
    union raju r;
    r.i = 18;
    printf("integer: %d\n", r.i);
    r.f = 45.5 ;
    printf("float: %.2f\n", r.f);
    printf("integer: %d\n", r.i);
}
