#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    char type;
} Patient;

typedef struct {
    int consulting;
    int scanning;
    int testing;
} Counter;

int read_patients_from_file(Patient[], char[]);
Counter count_patients_based_on_type(Patient[], int);
void display_type_counts(Counter);

int main(int argc, char const *argv[]) {
    Patient patients[1000];
    const int patient_count = read_patients_from_file(patients, "appointment.dat");
    Counter type_counts = count_patients_based_on_type(patients, patient_count);
    display_type_counts(type_counts);

    return 0;
}

int read_patients_from_file(Patient patients[], char file_name[]) {
    FILE *file;
    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("File %s does not exist!", file_name);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fscanf(file, "%s\t%c", patients[i].name, &patients[i].type) != EOF)
        i++;

    fclose(file);
    return i;
}

Counter count_patients_based_on_type(Patient patients[], int len) {
    Counter count = {0, 0, 0};
    for (int i = 0; i < len; i++) {
        if (patients[i].type == 'c')
            count.consulting++;
        if (patients[i].type == 's')
            count.scanning++;
        if (patients[i].type == 't')
            count.testing++;
    }
    return count;
}

void display_type_counts(Counter count) {
    printf("\nAppointment type\tNumber of patients\n");
    printf("-----------------------------------------------\n");
    printf("Consulting\t\t%d\n", count.consulting);
    printf("Scanning\t\t%d\n", count.scanning);
    printf("Testing\t\t\t%d\n", count.testing);
}
