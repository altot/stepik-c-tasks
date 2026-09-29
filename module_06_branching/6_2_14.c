/*
Валидация IP-адреса

IP-адреса (IPv4) записываются в виде четырёх десятичных чисел (от 0 до 255 включительно), разделённых точками, например: 127.0.0.1.

Напишите программу, проверяющую валидность IP-адреса.

Входные данные:

IP-адрес: четыре десятичных числа, разделённые точками.

Выходные данные:

Строка IP is valid! если IP-адрес корректный, иначе строка IP is invalid!



Наставление:

В этой задаче можно и нужно использовать инструкцию switch
*/
#include <stdio.h>
int main(void)
{

    int ip1, ip2, ip3, ip4;
    scanf("%d.%d.%d.%d", &ip1, &ip2, &ip3, &ip4);
    int tip1 = ip1 < 256 && ip1 >= 0;
    int tip2 = ip2 < 256 && ip2 >= 0;
    int tip3 = ip3 < 256 && ip3 >= 0;
    int tip4 = ip4 < 256 && ip4 >= 0;

    // switch 1
    switch (tip1)
    {
    case (1):
        // switch 2
        switch (tip2)
        {
        case (1):

            // switch 3
            switch (tip3)
            {
            case (1):

                // switch 4
                switch (tip4)
                {
                case (1):
                    printf("IP is valid!\n");
                    return 0;
                case (0):
                    printf("IP is invalid!\n");
                    return 0;
                default:
                    printf("IP is invalid!\n");
                    return 0;
                    // switch 4 END
                }

            case (0):
                printf("IP is invalid!\n");
                return 0;
            default:
                printf("IP is invalid!\n");
                return 0;
                // switch 3 END
            }

        case (0):
            printf("IP is invalid!\n");
            return 0;
        default:
            printf("IP is invalid!\n");
            return 0;
            // switch 2 END
        }

    case (0):
        printf("IP is invalid!\n");
        return 0;
    // switch 1 END
    default:
        printf("IP is invalid!\n");
        return 0;
    }
    return 0;
}