#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter the string ");
    scanf("%s",str);
    // fgets(str,sizeof(str),stdin);
    
    int len = strlen(str);
    
    for(int i = len-1 ; i >= 0 ; i--){
        printf("%c",str[i]);
    }
}
