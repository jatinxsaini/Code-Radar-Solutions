#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((((a*a)+(b*b)) >=c) || (((c*c)+(b*b)) >=a) || (((c*c)+(a*a)) >=b)){
        printf("Valid");
    else{
        print("Invalid");
    }
    return 0;
}
}
