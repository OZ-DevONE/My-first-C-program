# My-first-C-program

Это моя первая программа на языке C. Она просит ввести текст и количество повторений, а затем печатает текст нужное количество раз.
Я потратил всего 2 часа на изучение основ языка и вот что получилось!

**Код:**

```c
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
```

**ОС:** Linux Mint 21.3 Cinnamon
