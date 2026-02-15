// SWAPING TWO NUMBERS 

// 1st USING TEMP 
#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;
    printf("a = %d, b = %d\n", a, b);
    temp = a;  
    a = b;     
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}


// 2nd USING POINTERS 
#include <stdio.h>

void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int x = 10 ;
    int y = 20 ;
    printf(" x = %d y = %d\n",x,y);
    swap(&x,&y);
    printf(" x = %d y = %d\n",x,y);
    return 0;
}


// 3rd USING Arithmetic operations

#include<stdio.h>

int main() {
    int a = 22 ;
    int b = 45 ;
    printf(" x = %d y = %d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf(" x = %d y = %d\n",a,b);
    return 0;
}
