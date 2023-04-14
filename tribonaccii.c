#include <stdio.h>
/*önce temel durumlarý (n = 0, 1 veya 2) ayrý ayrý ele alýyoruz.*/
int tribonacci(int n) {
    if (n == 0) {
        return 0;
        /* n 1 boyutunda bir dp dizisi yaratýr ve onu 3'ten n'ye
		// yinelenen bir döngü kullanarak doldururuz.*/
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = dp[2] = 1;
        for
        /* dizinin mevcut elemanýný önceki üç elemanýn toplamý olarak hesaplar ve dp dizisinde saklarýz.*/
		 (int i = 3; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
}
/*N'inci Tribonacci sayýsý olan dp[n]'yi döndürürüz.*/
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The %dth Tribonacci number is %d\n", n, tribonacci(n));
    return 0;
}
