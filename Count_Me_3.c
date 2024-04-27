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
       char str[10001];
         scanf("%s", str);
         int capitalCount = 0;
         int smallCount = 0;
         int digitCount = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                capitalCount++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                smallCount++;
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                digitCount++;
            }

        }
        
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}
