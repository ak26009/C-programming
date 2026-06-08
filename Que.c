#include <stdio.h>

int main() {
    int num = 5;
    {
        int num = 10;
        printf("%d ", num);
    }
    printf("%d", num);
    return 0;
}

op - 10 5
// Inside the braces, the inner num (10) shadows the outer num. Therefore, the first printf prints 10.
// Once the execution leaves the inner braces, that local num is destroyed. The printf outside the braces accesses the original num defined at the start of main, which remains 5

