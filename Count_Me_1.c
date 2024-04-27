#include <stdio.h>

int main()
{
    // Your code here
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("%d", a);
    // printf("hello\n");
    // int cnt[2];
    int dv2 = 0;
    int dv3 = 0;
    for (int i = 0; i < n; i++)

    {
        int value = a[i];
        // printf("%d", value);
        if (value % 2 == 0 && value % 3 == 0)
        {
            dv2++;
        }
        else if (value % 2 == 0 && value % 3 != 0)
        {
            dv2++;
        }
        else if (value % 2 != 0 && value % 3 == 0)
        {
            dv3++;
        };
    }
    printf("%d %d", dv2 , dv3);

    return 0;
}