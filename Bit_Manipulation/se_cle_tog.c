#include <stdio.h>

// check condition to see if the bit is set or not.
void is_it_set(int pos,int no){
    if(no &(1<<pos))
        printf("It is set\n");
    else
        printf("It is not set\n");
}

// check condition to see if the bit is clear or not.
void is_it_clear(int cl,int no){
    if((no &(1<<cl))==0)
        printf("It is clear\n");
    else
        printf("It is not clear\n");
}

int main() {
    int pos;
    printf("Enter the position you want to set ");
    scanf("%d",&pos);
    int no = 5;
    
    no = no | (1<<pos);
    is_it_set(pos,no);
    printf("The current value is %d\n",no);
    
    int cl ;
    printf("Enter the position you want to clear ");
    scanf("%d",&cl);
    
    no = no & ~(1<<cl);
    is_it_clear(cl,no);
    printf("The current value is %d\n",no);
    
    int tog;
    printf("Enter the position you want to toggle ");
    scanf("%d",&tog);
    
    no = no^(1<<tog);
    printf("The current value is %d\n",no);

    return 0;
}







// USING SWITCH CASE

#include<stdio.h>

int main(){
    
    unsigned int no,pos;
    int op,result;

    printf("Enter the number and pos ");
    scanf("%d %d",&no,&pos);

    printf("Enter the operation you want to on the number\n");
    printf("11.SET BIT\n 2.Clear BIT\n 3.TOGGLE BIT\n");
    scanf("%d",&op);
    

        switch(op){
        case 1:
            no |= (1<<pos);
            printf("The Bit is set %d\n",no);
            break;

        case 2:
            no &= ~(1<<pos);
            printf("The Bit is clear %d\n",no);
            break;
        
        case 3:
            no ^= (1<<pos);
            printf("The Bit is toggled %d\n",no);
            break;
        
        default:
            printf("Invalid operation");

    }
    
}
