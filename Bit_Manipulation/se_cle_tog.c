#include <stdio.h>

int main() {
    int pos;
    printf("Enter the position you want to set ");
    scanf("%d",&pos);
    int no = 5;
    
    no = no | (1<<pos);
    printf("The current value is %d\n",no);
    
    int cl ;
    printf("Enter the position you want to clear ");
    scanf("%d",&cl);
    
    no = no & ~(1<<pos);
    printf("The current value is %d\n",no);
    
    int tog;
    printf("Enter the position you want to toggle ");
    scanf("%d",&tog);
    
    no = no^(1<<pos);
    printf("The current value is %d\n",no);

    return 0;
}
