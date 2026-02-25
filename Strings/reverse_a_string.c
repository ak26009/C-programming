// using string function
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



// without using string functions 
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int start = 0,end;
    int temp;
    
    printf("Enter the string \n");
    fgets(str,sizeof(str),stdin);
    
    end = strlen(str)-1;
    
    while(start<end){
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
    printf("Reverse String is %s",str);
    return 0;
}
