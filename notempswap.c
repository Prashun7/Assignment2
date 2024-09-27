#include <stdio.h>

int main() {
    int a=10,b=20,c=30;
    printf("Before swapping a=%d, b=%d and c=%d\n",a, b, c);
    a=a+b+c;  
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
    printf("After swapping a=%d, b=%d and c=%d",a, b, c);
    return 0;
}
