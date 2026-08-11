#include <stdio.h>
int main()
{
    char item[30];
    int quantity;
    float price, total;

    printf("Enter item: ");
    scanf("%s", item);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price);

    total = quantity * price;

    printf("Item: %s\nQty: %d\nTotal: %.2f\n", item, quantity, total);
    return 0;
}