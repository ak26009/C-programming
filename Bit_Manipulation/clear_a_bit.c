#include <stdio.h>

int main() {
    int num , pos;
    
    printf("Enter No. ");
    scanf("%d",&num);
    
    printf("Enter Position  ");
    scanf("%d",&pos);
    
    num = num & ~(1<<pos);
    
  printf("Result = %d\n", num);
}
