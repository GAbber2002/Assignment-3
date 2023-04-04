#include <stdio.h>

int main()
+{
    float cost_price, selling_price, profit_or_loss_percent;

    printf("Enter the cost price: ");
    scanf("%f", &cost_price);


    printf("Enter the selling price: ");
    scanf("%f", &selling_price);



    if (selling_price > cost_price)
    {
        profit_or_loss_percent = (selling_price - cost_price) / cost_price * 100.0;
        printf("You made a profit of %.2f%%.\n", profit_or_loss_percent);
    }

    else if (selling_price < cost_price)
    {
        profit_or_loss_percent = (cost_price - selling_price) / cost_price * 100.0;
        printf("You incurred a loss of %.2f%%.\n", profit_or_loss_percent);
    }


    else
    {
        printf("You broke even.\n");
    }

    return 0;
}
