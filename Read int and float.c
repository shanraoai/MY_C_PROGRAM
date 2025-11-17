#include <stdio.h>
int main() {
    int a;
    float b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float value: ");
    scanf("%f", &b);
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    return 0;
}
