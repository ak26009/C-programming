#include <stdio.h>

int main() {
    int num = 5;      // 0101
    int pos = 1;

    num = num | (1 << pos);

    printf("Result = %d\n", num);
}
