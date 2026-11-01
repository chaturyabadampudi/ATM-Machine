#include <stdio.h>
int main()
{
    int pin,menu;
    long long balance=25000,deposit,withdraw;

         printf("\n=============================\n");
         printf("       ATM MACHINE           \n");
         printf("=============================\n");
         printf("Enter your pin: ");
         scanf("%d",&pin);
         if(pin==1234)
        {
            printf("PIN verified successfully!\n");

            do {
            printf("\n==============================\n");
            printf("          ATM MENU            \n");
            printf("==============================\n");
            printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Cash\n4. Exit\n");
            printf("Enter your choice: ");
            scanf("%d",&menu);
            switch(menu)
            {
            case 1:
                printf("Current Balance: $%lld\n",balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%lld",&deposit);
                if(deposit>0)
                {
                    balance=balance+deposit;
                    printf("Deposit successful!\nUpdated Balance: $%lld\n",balance);
                }
                else
                {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%lld",&withdraw);
                if(balance>=withdraw)
                {
                    balance=balance-withdraw;
                    printf("Withdrawal successful!\nPlease collect your cash.\nRemaining Balance: $%lld\n",balance);
                }
                else
                {
                     printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM!\nHave a nice day.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;

            }
        }
         while(menu!=4);

        }
         else
            {
              printf("Incorrect PIN! Access denied.\n");
            }




    return 0;
}
