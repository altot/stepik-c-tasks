#include <stdio.h>

int main(void)
{
    int ip1, ip2, ip3, ip4;
    scanf("%d.%d.%d.%d", &ip1, &ip2, &ip3, &ip4);

    int tip1 = (ip1 >= 0 && ip1 <= 255);
    int tip2 = (ip2 >= 0 && ip2 <= 255);
    int tip3 = (ip3 >= 0 && ip3 <= 255);
    int tip4 = (ip4 >= 0 && ip4 <= 255);

    switch (tip1 + tip2 + tip3 + tip4)
    {
    case 4:
        printf("IP is valid!\n");
        break;
    default:
        printf("IP is invalid!\n");
        break;
    }

    return 0;
}