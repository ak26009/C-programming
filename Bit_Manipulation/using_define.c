#include<stdio.h>

#define SET(no,pos) ((no) |= (1U <<(pos)))
#define CLEAR(no,pos) ((no) &=~ (1U <<(pos)))
#define TOGGLE(no,pos) ((no) ^= (1U <<(pos)))
#define CHECK(no,pos) ((no) & (1U <<(pos)))

int main(){
    int no,pos;
    
    printf("Enter the Number to set ");
    scanf("%d",&no);
    
    printf("Enter the position ");
    scanf("%d",&pos);
    
    SET(no,pos);
    CLEAR()
    printf("The current number is %d",no);
}
