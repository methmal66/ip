#include<stdio.h>

struct Transaction {
    char account_number[150];
    char name[150];
    char type;
    float amount;
};

int main() {
    const short SIZE = 5;
    struct Transaction transactions[SIZE]; //array of structures
    printf("Enter transactiosan details as below\n");
    printf("account_no name type amount\n");
    printf("Accepting types (w)ithdraw/(d)eposit\n\n");

    //get user inputs
    for (int i = 0; i < SIZE; i++) {
        printf("Transaction %d >>>", i + 1);
        scanf("%s %s %c %f",
            transactions[i].account_number,
            transactions[i].name,
            &transactions[i].type,
            &transactions[i].amount
        );
    }

    //calculate total
    float withdrawal_total = 0, deposit_total = 0;
    struct Transaction max_deposit = transactions[0];
    struct Transaction min_withdrawal = transactions[0];

    for (int i = 0; i < SIZE; i++) {
        if (transactions[i].type == 'w' || transactions[i].type == 'W') {
            withdrawal_total += transactions[i].amount;
            if (transactions[i].amount < min_withdrawal.amount)
                min_withdrawal = transactions[i];
        }

        if (transactions[i].type == 'd' || transactions[i].type == 'D') {
            deposit_total += transactions[i].amount;
            if (transactions[i].amount > max_deposit.amount)
                max_deposit = transactions[i];
        }
    }

    printf("\nTotal deposit amount : %.2f\n", deposit_total);
    printf("Total Withdrawal amount : %.2f\n", withdrawal_total);
    printf("Name of the customer with the maximum deposit amount : %s\n", max_deposit.name);
    printf("Name of the customer with the minimum withdrawal amount : %s\n", min_withdrawal.name);

    return 0;
}