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






// Without string length function
#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    int len = 0;
    char temp ;
    
    printf("Enter a string ");
    fgets(str,sizeof(str),stdin);
    
    while(str[len]!='\0'){
        len++;
    }
    for(int i=0,j=len-1 ; i<j ; i++,j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse String is %s",str);
    return 0;
}
