#include <stdio.h>

int main(void) {
    int n, x;
    int cnt = 0;

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int y = 0;
        scanf("%d", &x);
        if(x>1){
            for(int j = 2; j < x; j++){
                if(x % j == 0){
                    y += 1;
                }
            }
            if(y == 0){
                cnt += 1;
            }
        }
    }
    printf("%d", cnt);
}


// 최적
// #include <stdio.h>

// int main(void) {
//     int n, x;
//     int cnt = 0;

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &x);

//         if (x < 2)
//             continue;

//         int isPrime = 1;

//         for (int j = 2; j * j <= x; j++) {
//             if (x % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }

//         if (isPrime)
//             cnt++;
//     }

//     printf("%d", cnt);

//     return 0;
// }