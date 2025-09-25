#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int tos;
    int size;
    int *s;
};

struct stack st;

// isfull
int isfull(){
    if(st.tos == st.size-1)
        return 1;
    else
        return 0;
}

// isempty
int isempty(){
    if(st.tos == -1)
        return 1;
    else
        return 0;
}
// push
void push(int n){
    if(isfull()){
        printf("Stack is full");
    }
    else{
        st.tos++;
        st.s[st.tos] = n;
        printf("%d is pushed into the stack\n",n);
    }
}

// pop
int pop(){
    int x = -1;
    if(isempty()){
        printf("Stack is empty");
    }
    else{
        x = st.s[st.tos];
        st.tos--;
    }
    return x;
}

// peek
int peek(){
    int x = -1;
    if(isempty()){
        printf("Stack is empty");
    }
    else{
        x = st.s[st.tos];
    }
    return x;
}

int main(){
    st.tos = -1;
    st.size = 0;
    st.s = NULL;
    
    printf("Enter the size ");
    scanf("%d",&st.size);
    st.s = (int*)malloc(sizeof(int)*st.size);
    
    // safety check
    if(st.s == NULL){
        printf("Memory allocation failed ");
        return 1;
    }
    
    // balancing of paranthesis
    char a[100];
    printf("Enter the expression");
    scanf("%s",a);
    int flag = 0 ;
    int i;
    for(i = 0 ; i<strlen(a); i++){
        char ch = a[i];
        switch(ch){
            case '(':
            case '[':
            case '{':
                    push(ch);
                    break;
                    
            case ')': if(ch == ')' && ch =='(')
                pop();
            else
                flag =1;
            break;
            
            case ']': if(ch == ']' && ch =='[')
                pop();
            else
                flag =1;
            break;
            
            case '}': if(ch == '}' && ch =='{')
                pop();
            else
                flag =1;
            break;
            
            default : break;
        }
        
    }
    if(flag == 1){
            printf("Unbalance");
        }else if(i == strlen(a) && isempty()){
            printf("Balance");
        }
    
    
    
    
    
    
    
    
    
//   int op,value;
//     while(1){
//         printf("\nChoose the operation\n");
//         printf("\n1.Push\n");
//         printf("\n2.Pop\n");
//         printf("\n3.Peek\n");
//         printf("\n4.Exit\n");
//         scanf("%d",&op);
        
//         switch(op){
//             case 1 : printf("Enter the value for push\n");
//                     scanf("%d",&value);
//                     push(value);
//                     break;
//             case 2 :
//                     pop();
//                     break;
                    
//             case 3 : value = peek();
//                 if(value != -1){
//                 printf("The peek is %d",value);
//             }
//                     break;
//             case 4 :
//                     free(st.s);
//                     exit(0);
//                     break;
//         }
//     } 
    
}
