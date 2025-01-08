#include <stdio.h>

char check_point1[50] = "Что нужно вывести?: ";

int main ()
{
    char x[50];
    int a;
    printf("%s\a", check_point1);
    fgets(x, sizeof(x), stdin);

    printf("Число итераций: ");
    scanf("%d", &a);

    while(a > 0)
    {
        printf("%s\n", x);
        a--;
    }
    return 0;
}
