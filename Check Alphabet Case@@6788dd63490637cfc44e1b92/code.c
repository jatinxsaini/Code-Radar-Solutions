#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if( c>='A' && c<='A'){
        printf("Uppercase");
    }
    else if (c>='a' && c<='z'){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}