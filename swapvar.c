#include<stdio.h>
int main(){
    int a=10,b=20,temp;
    printf("Before swapping a=%d and b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d",a,b);
    return 0;
}