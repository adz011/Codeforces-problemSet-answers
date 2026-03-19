#include <stdio.h>

int main() {
    int t,n;
    scanf("%d", &t);
    while(t--){
        int s = 0;
        scanf("%d", &n);
        int a[n];

        for(int i =0; i<n; i++){
            scanf("%d", &a[i]);
        }
        int max = 0, c = 0;
        for(int i = 0; i<n; i++){
            if(a[i]>= max){
                max = a[i];
                c++;
            }
        }
        printf("%d\n", c);
    }
}