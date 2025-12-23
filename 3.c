#include<stdio.h>
int main(){
    char bill;
    printf("Menu:\nB - Burger\nF - Fries\nP - Pizza\nS - Sandwich\n");
    printf("Enter your choice (B F P S) : ");
    scanf("%c",&bill);
    switch(bill){
        case 'B':
            printf("Burger price is 50rs\n");
            printf("Enter Quantity: ");
            int burger = 50;
            int quantity;
            scanf("%d",&quantity);
            printf("Total Bill is : %d",burger*quantity);
            break;
        case 'F':
            printf("Fries price is 30rs\n");
            printf("Enter Quantity: ");
            int fries = 30;
            int qty;
            scanf("%d",&qty);
            printf("Total Bill is : %d",fries*qty);
            break;
        case 'P':
            printf("Pizza price is 100rs\n");
            printf("Enter Quantity: ");
            int pizza = 100;
            int qu;
            scanf("%d",&qu);
            printf("Total Bill is : %d",pizza*qu);
            break;
        case 'S':
            printf("Sandwich price is 80rs\n");
            printf("Enter Quantity: ");
            int sandwich = 80;
            int qua;
            printf("Enter Quantity: ");
            scanf("%d",&qua);
            printf("Total Bill is : %d",sandwich*qua);
            break;
        default:
            printf("Item not available");
    }
    return 0;
}