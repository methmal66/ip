#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char no[100];
    char nic[12];
    char name[100];
    float balance;
} Account;

typedef struct {
    char type;
    float amount;
} Transaction;

int read_transaction_details_from_file(Transaction[], int, char[]);
Account find_relevant_account_from_file(char[]);
Account perform_transactions(Account, Transaction[], int);

int main(int argc, char const *argv[]) {
    const int MAX_LEN = 100;
    Transaction transactions[MAX_LEN];
    const int count = read_transaction_details_from_file(transactions, MAX_LEN, "transaction.txt");
    const Account searched_account = find_relevant_account_from_file("account.txt");
    const Account updated_account = perform_transactions(searched_account, transactions, count);
    printf("Updated account balance : %.2f\n", updated_account.balance);
}

int read_transaction_details_from_file(Transaction actions[], int max_len, char file_name[]) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("File %s does not exist!\n", file_name);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fscanf(file, "%c\t%f", &actions[i].type, &actions[i].amount) != EOF) {
        if (i == max_len) {
            printf("Maximum number of transactions exceeded!\n");
            break;
        }
        i++;
    }

    fclose(file);
    return i;
}

Account find_relevant_account_from_file(char file_name[]) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("File %s does not exist!\n", file_name);
        exit(EXIT_FAILURE);
    }

    Account account;
    const char account_no[100];
    printf("Enter account no.>>> ");
    scanf("%s", account_no);

    while (fscanf(file, "%s\t%s\t%s\t%f", account.no, account.nic, account.name, &account.balance) != EOF) {
        if (!strcmp(account.no, account_no)) {
            fclose(file);
            return account;
        }
    }

    printf("Searched account does not exist!\n");
    exit(EXIT_FAILURE);
}

Account perform_transactions(Account account, Transaction actions[], int len) {
    Account updated_account = account;
    for (int i = 0; i < len; i++) {
        switch (actions[i].type) {
            case 'd':
                updated_account.balance += actions[i].amount;
                break;
            case 'w':
                updated_account.balance -= actions[i].amount;
                break;
            default:
                break;
        }
    }
    return updated_account;
}
