#include <stdio.h>

int main(){
    int n, s, r;
    scanf("%d", &n);
    s= n / 100;
    r = n % 100;
    s+= r / 20;
    r = r % 20;
    s += r / 10;
    r = r % 10;
    s+= r / 5;
    r = r % 5;
    s+= r;
    printf("%d\n", s);
}