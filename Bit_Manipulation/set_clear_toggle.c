#include <stdio.h>

int main() {
    int num , pos;
    
    printf("Enter No. ");
    scanf("%d",&num);
    
    printf("Enter Position  ");
    scanf("%d",&pos);
    int op;
    printf("Select operation\n1.Set\n2.clear\n3.Toggle\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("SET\n");
        num = num | (1<<pos); 
        printf("Result = %d\n", num);
        break;
        
        case 2:
        printf("CLEAR\n");
        num = num & ~(1<<pos); 
        printf("Result = %d\n", num);
        break;
        
        case 3:
        printf("Toggle\n");
        num = num ^(1<<pos); 
        printf("Result = %d\n", num);
        break;
    }
    
    
}
