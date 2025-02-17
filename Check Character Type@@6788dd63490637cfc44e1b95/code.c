#include<stdio.h>
int main(){
    char alpha;
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
        printf("Vowel");
    }
    else if(alpha>='a' && alpha<='z' || alpha>='A' && alpha<='Z'){
        printf("Consonant");
    }
    else if(alpha>='0' && alpha<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

}