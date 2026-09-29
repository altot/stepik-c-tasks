/*
Для целого числа KK (от 1 до 99 включительно) напечатать фразу «Мне K лет», учитывая при этом, что при некоторых значениях K слово «лет» надо заменить на слово «год» или «года». Например, 11 лет, 22 года, 51 год.

Входные данные: Одно целое число K, 1≤k≤91≤k≤99

Выходные данные: Фраза с правильным окончанием
*/
#include <stdio.h>
int main(void)
{
    int k;
    scanf("%d", &k);
    switch (k)
    {
    case (1):
    case (21):
    case (31):
    case (41):
    case (51):
    case (61):
    case (71):
    case (81):
    case (91):
        printf("Мне %d год\n", k);
        break;
    case (2):
    case (3):
    case (4):
    case (22):
    case (23):
    case (24):
    case (32):
    case (33):
    case (34):
    case (42):
    case (43):
    case (44):
    case (52):
    case (53):
    case (54):
    case (62):
    case (63):
    case (64):
    case (72):
    case (73):
    case (74):
    case (82):
    case (83):
    case (84):
    case (92):
    case (93):
    case (94):
        printf("Мне %d года\n", k);
        break;
    default:
        printf("Мне %d лет\n", k);
        break;
    }
    return 0;
}