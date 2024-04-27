#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i <T; i++)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int totalWorker = M1 + M2;
        int totalM1M2Takes = (D * M1) / totalWorker; 
        int totalFewerDays = D - totalM1M2Takes;
        if (totalFewerDays < 1 && totalFewerDays > 0)
        {
            printf("%d\n", 1);
        }
        
       else{

        printf("%d\n", totalFewerDays);
       }






    }
    

  
    return 0;
}