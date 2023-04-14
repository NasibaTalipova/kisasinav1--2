#include <stdio.h>
/*�nce temel durumlar� (n = 0, 1 veya 2) ayr� ayr� ele al�yoruz.*/
int tribonacci(int n) {
    if (n == 0) {
        return 0;
        /* n 1 boyutunda bir dp dizisi yarat�r ve onu 3'ten n'ye
		// yinelenen bir d�ng� kullanarak doldururuz.*/
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = dp[2] = 1;
        for
        /* dizinin mevcut eleman�n� �nceki �� eleman�n toplam� olarak hesaplar ve dp dizisinde saklar�z.*/
		 (int i = 3; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
}
/*N'inci Tribonacci say�s� olan dp[n]'yi d�nd�r�r�z.*/
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("The %dth Tribonacci number is %d\n", n, tribonacci(n));
    return 0;
}
