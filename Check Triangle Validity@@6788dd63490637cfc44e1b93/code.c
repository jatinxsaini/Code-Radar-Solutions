#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Valid");
    } else {
        printf("Invalid");
    }
    return 0;
}

