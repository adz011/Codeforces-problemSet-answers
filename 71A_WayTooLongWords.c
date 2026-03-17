#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char strings[n][101];
    for(int i =0; i<n; i++){
        scanf("%s", strings[i]);
    }
    
    for (int i =0; i<n; i++){
        int length = strlen(strings[i]); 
        if(length > 10){
            printf("%c%d%c\n", strings[i][0], length - 2, strings[i][length-1]);
        }else printf("%s\n", strings[i]);
    }
}