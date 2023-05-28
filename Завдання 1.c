#include <stdio.h>
#include <stdlib.h>

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
     int n, m;
    printf("Задайте розмірність матриці n, m: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    int i1, j1, i2, j2;
    printf("Задайте координати першого елемента (i1 j1): ");
    scanf("%d %d", &i1, &j1);
    printf("Задайте координати другого елемента (i2 j2): ");
    scanf("%d %d", &i2, &j2);
        if (i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || i2 < 0 || i2 >= n || j2 < 0 || j2 >= m)
    {
        printf("Неправильні координати елементів, повторіть спробу.\n");
        goto choice;
    }
    int i1j1 = a[i1][j1];
    int i2j2 = a[i2][j2];
    int max = i1j1;
    if (i2j2 > max)
    {
        max = i2j2;
    }
    printf("Максимальне значення: %d \n", max);
    goto choice;
}
}
