#include <stdio.h>
int main(){
    int n,m;
    char operation;
    scanf("%d %d %c",&n,&m,&operation);
    if(operation=='+'){
        printf("%d",n+m);
    }
    else if(operation=='-'){
        printf("%d",n-m);
    }
    else if(operation=='*'){
        printf("%d",n*m);
    }
    else if(operation=='/'){
        if (m!=0)
        printf("%d",n/m);
    }
    else{
        printf("error");
    }
}