#include <stdio.h>

typedef struct {
    char account_number[100];
    char name[100];
    float amount;
    char type;
} Transaction;

void input_transactions(Transaction[], int);
float calculate_total_amount(Transaction[], int, char);
Transaction find_best_transaction(Transaction[], int, char);

int main() {
    const int COUNT = 5;
    Transaction transactions[COUNT];
    input_transactions(transactions, COUNT);

    const float total_deposit_amount = calculate_total_amount(transactions, COUNT, 'd');
    const float total_withdrawal_amount = calculate_total_amount(transactions, COUNT, 'w');
    const Transaction largest_deposite = find_best_transaction(transactions, COUNT, 'd');
    const Transaction smallest_withdrawal = find_best_transaction(transactions, COUNT, 'w');

    printf("\nTotal deposit amount : %.2f\n", total_deposit_amount);
    printf("Total withdrawal amount : %.2f\n", total_withdrawal_amount);
    printf("Customer with the largest deposit : %s\n", largest_deposite.name);
    printf("Customer with the smallest withdrawal : %s\n", smallest_withdrawal.name);

    return 0;
}

void input_transactions(Transaction actions[], int len) {
    printf("Enter %d transaction details in following :\n", len);
    printf("account_number name amount type\n");
    printf("Available types : (w)ithdrawal/(d)eposit\n\n");
    for (int i = 0; i < len; i++) {
        printf("Transaction%d>>> ", i + 1);
        scanf("%s %s %f %c", actions[i].account_number, actions[i].name, &actions[i].amount, &actions[i].type);
    }
}

float calculate_total_amount(Transaction actions[], int len, char type) {
    float total = 0;
    for (int i = 0; i < len; i++) {
        if (actions[i].type == type)
            total += actions[i].amount;
    }
    return total;
}

Transaction find_best_transaction(Transaction actions[], int len, char type) {
    //inital transaction value depends on searching transaction type, deposit or withdrawal
    Transaction current_best_transaction = {"", "", type == 'd' ? 0 : __FLT_MAX__, '_'};

    for (int i = 0; i < len; i++) {
        switch (type) {
            case 'd':
                if (actions[i].type == 'd')
                    if (actions[i].amount > current_best_transaction.amount)
                        current_best_transaction = actions[i];
                break;

            case 'w':
                if (actions[i].type == 'w')
                    if (actions[i].amount < current_best_transaction.amount)
                        current_best_transaction = actions[i];
                break;

            default:
                break;
        }
    }
    return current_best_transaction;
}
