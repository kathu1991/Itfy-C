//7. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity ; Suppose, one unit will cost 100. Judge and print total cost for user.

#include <stdio.h>
int main()
{
    int qty;
    float cost;
    int dis = 0;
    int rate = 100;
    printf("Please Enter Quantity\n");
    scanf("%d", &qty);

    if (qty > 1000)
    {
        // 10% discount
        dis = 10;
    }
    cost = (qty * rate) - (qty * rate * dis / 100);
    printf("Total Cost is %.2f", cost);
    return 0;
}