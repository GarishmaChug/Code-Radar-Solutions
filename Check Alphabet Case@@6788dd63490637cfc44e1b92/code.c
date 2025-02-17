#include<stdio.h>
int main(){
    char character;
    if(character>='A' && character<='Z'){
        printf("Uppercase");
    }
    else if(character>='a' && character<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}