#include <stdio.h>

//function declaration also called as prototype
int fun(int a, int b);

int main() {
    int x = fun(20, 10);
    printf("%d\n", x);
    return 0;
}

// function definition
int fun(int a, int b) {
    return a + b;
}
