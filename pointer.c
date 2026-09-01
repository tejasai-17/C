#include <stdio.h>
#include <string.h>

int main(){
    int a = 5;
    int *p = &a;
    
    printf("Value of a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("value of p = %d\n", *p);
    printf("address of p = %p\n", p);
    return 0;
}