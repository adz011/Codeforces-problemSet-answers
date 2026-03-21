#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        if (k < n || k > 2*n - 1) {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
        int m = k - n;
        // Adjacent pairs 1..(n-m-1)
        for (int j = 1; j <= n-m-1; j++)
            printf("%d %d ", j, j);
        // Chain of (m+1) pairs: base, base+1, ..., n
        int base = n - m;
        for (int i = 0; i <= m; i++) {
            printf("%d ", base + (i == 0 ? 0 : i-1));
            printf("%d ", base + (i == m ? m : i+1));
        }
        printf("\n");
    }
    return 0;
}