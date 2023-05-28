#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char input;
choice:
    printf("Запустити код? (y/n): ");
    scanf(" %c", &input);
    if (input == 'y')
    {
        goto code;
    }
    else if (input == 'n')
    {
        printf("Код зупинено.");
        return 0;
    }
    else
    {
        printf("Невірний вибір, введіть ще раз.\n");
        goto choice;
    }

code:
{
    int a[3][4];
    int count = 0;
    int c[3 * 4];
    int k = 0;

    srand(time(0));

    printf("Матриця A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a[i][j] = rand() % 201 - 100;
            printf("%d ", a[i][j]);

            int u = 1;
            for (int n = 0; n < k; n++)
            {
                if (c[n] == a[i][j])
                {
                    u = 0;
                    break;
                }
            }
            if (u)
            {
                c[k++] = a[i][j];
                count++;
            }
        }
        printf("\n");
    }

    printf("Кількість різних елементів: %d\n", count);

    goto choice;
}
}
