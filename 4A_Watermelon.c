#include <stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    printf((n > 3 && n % 2 == 0)? "YES" : "NO"); 
}