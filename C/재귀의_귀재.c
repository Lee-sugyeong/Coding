#include <stdio.h>
#include <string.h>

int recursion(const char *s, int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}


int main() {
    int T, cnt;
    scanf("%d", &T);
    char arr[T], result[T];
    
    for(int i = 0; i < T; i++){
        scanf("%s", &arr[i]);
        printf("%d", isPalindrome(arr[i]));
    }
    return 0;
}