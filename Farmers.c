#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    if (T < 1 || T > 1000) {
        printf("Test case should be 1 to 1000.\n");
        return 1; 
    }

    for (int i = 0; i < T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        if (M1 < 1 || M1 > 1000 || M2 < 0 || M2 > 1000 || D < 1 || D > 100) {
            printf("Invalid input for the test case %d.\n", i + 1);
            continue; 
        }

        int totalWorker = M1 + M2;
        int totalM1M2Takes = (D * M1) / totalWorker; 
        int totalFewerDays = D - totalM1M2Takes;

        if (totalFewerDays < 1 && totalFewerDays > 0) {
            printf("%d\n", 1);
        } else {
            printf("%d\n", totalFewerDays);
        }
    }

    return 0;
}
