#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    
    while(n--){
        long long s;
        scanf("%lld", &s);

        int digits[19];
        int k = 0;

        while(s > 0){
            digits[k++] = s % 10;
            s /= 10;
        }
        digits[k-1]--;
        int sum = 1;
        qsort(digits, k, sizeof(int), comp);
        
        for(int l = 0; l < k; l++){
            sum+= digits[l];
        }
        int j = 0;
        while(sum > 9){
            sum-=digits[j++];
        }
        printf("%d\n", j);
    }

    return 0;
}