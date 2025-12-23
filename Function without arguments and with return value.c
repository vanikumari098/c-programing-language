#include <stdio.h>

int add() {
    int a = 15, b = 25;
    return a + b;
}

int main() {
    int result;
    result = add();   
    printf("Sum = %d", result);
    return 0;
}
