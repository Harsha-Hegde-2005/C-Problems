// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ODDPAIRS
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
    int T;               // T is the number of test cases
    long long N;         // N is the input number (declared as long long to handle large values)

    scanf("%d", &T);     // Read the number of test cases

    for (int i = 0; i < T; i++) {
        scanf("%lld", &N);  // Read the value of N for each test case

        // If N is 1, the result is 0 because the sum of 0 natural numbers is 0
        if (N == 1) {
            printf("0 \n");
        } else {
            // Compute sum of first (N - 1) natural numbers: (N - 1) * N / 2
            // To avoid overflow, we use the formula carefully:
            // If N is even: N/2 * (N-1)
            // If N is odd: (N-1)/2 * N
            // But this version approximates it as:
            //    N/2 * N         when N is even
            //    N/2 * (N+1)     when N is odd
            // This works mathematically because it gives the same result:
            //    (N-1)*N/2 == (N/2)*N when N is even
            //    (N-1)*N/2 == (N/2)*(N+1) when N is odd (due to integer division)

            // Ternary operation: choose formula based on parity of N
            (N % 2 == 0)
                ? printf("%lld \n", N / 2 * N)        // For even N
                : printf("%lld \n", N / 2 * (N + 1)); // For odd N
        }
    }

    return 0;
}
