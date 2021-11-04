#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char no[100];
    char nic[12];
    char name[100];
    float balance;
} Account;

void input_account_details(Account[], int);
void write_account_details_to_file(Account[], int, char[]);

int main(int argc, char const *argv[]) {
    const int COUNT = 4;
    Account accounts[COUNT];
    input_account_details(accounts, COUNT);
    write_account_details_to_file(accounts, COUNT, "account.txt");
}

void input_account_details(Account accounts[], int len) {
    printf("Enter %d account details in the following format:\n", len);
    printf("account_no NIC_no name balance\n\n");
    for (int i = 0; i < len; i++) {
        printf("Account%d>>> ", i + 1);
        scanf("%s %s %s %f", accounts[i].no, accounts[i].nic, accounts[i].name, &accounts[i].balance);
    }
}

void write_account_details_to_file(Account accounts[], int len, char file_name[]) {
    FILE *file;
    file = fopen("account.txt", "w");
    if (file == NULL) {
        printf("Cannot write to file %s", file_name);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++)
        fprintf(file, "%s\t%s\t%s\t%.2f\n", accounts[i].no, accounts[i].nic, accounts[i].name, accounts[i].balance);
    fclose(file);
}
