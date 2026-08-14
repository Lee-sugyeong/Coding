#include <stdio.h>

int main(void) {
    int n;
    int k = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        k *= i;
    }
    printf("%d", k);
    return 0;
}
