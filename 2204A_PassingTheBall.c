#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i =0; i <n; i++){
        int max = 0, ci = 1, k;
        scanf("%d", &k);
        char input[200005];
        scanf("%s", input);
        char* f = strstr(input, "RL");
        if(f == NULL){
            printf("%d\n", k);
        }else printf("%d\n", (int) (f - input) +2);
        
    }
}