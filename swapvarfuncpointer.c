
#include <stdio.h>
void func(int *x, int *y) {
    int temp;
    temp = *x; 
    *x = *y;
    *y = temp;
}
int main() {
    int a = 10,b = 20;
    printf("Before swapping a=%d and b=%d\n", a, b);
    func(&a, &b);
    printf("After swapping a=%d and b=%d\n", a, b);
    return 0;
}

