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
}


// 최적
// #include <stdio.h>

// int main(void) {
//     int n;
//     int x, min, max;

//     scanf("%d", &n);

//     scanf("%d", &x);
//     min = x;
//     max = x;

//     for (int i = 1; i < n; i++) {
//         scanf("%d", &x);

//         if (x < min) {
//             min = x;
//         }

//         if (x > max) {
//             max = x;
//         }
//     }

//     printf("%d", min * max);

//     return 0;
// }