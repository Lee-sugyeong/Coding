#include <stdio.h>

int main(void) {
    int n, min, max;
    scanf("%d", &n);
    
    int k[n];
    for(int i=0; i<n; i++){
        scanf("%d", &k[i]);
    }
    
    max=k[0];
    min=k[0];
    for(int j=0; j<n; j++){
        if(k[j] >= max){
            max=k[j];
        }
        
        if(k[j] <= min){
            min=k[j];
        }
    }
    printf("%d", max*min);
    
    return 0;
