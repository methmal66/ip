#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    char type;
} Patient;

void input_patients_detail(Patient[], int);
void write_patients_detail_to_file(Patient[], int, char[]);

int main(int argc, char const *argv[]) {
    const int NUM_OF_PATIENTS = 5;
    Patient patients[NUM_OF_PATIENTS];
    input_patients_detail(patients, NUM_OF_PATIENTS);
    write_patients_detail_to_file(patients, NUM_OF_PATIENTS, "appointment.dat");
    return 0;
}

void input_patients_detail(Patient patients[], int count) {
    printf("Valid patient types :\n\t>(c)onsulting\n\t>(s)canning\n\t>(t)esting\n\n");
    printf("Enter patients name and type :\n");

    for (int i = 0; i < count; i++) {
        char type;
        printf("Patient %d>>>", i + 1);
        scanf("%s %c", patients[i].name, &type);

        if (type != 'c' && type != 's' && type != 't') {
            printf("Invalid type! try again\n");
            i--;
            continue;
        }
        patients[i].type = type;
    }
}

void write_patients_detail_to_file(Patient patients[], int len, char file_name[]) {
    FILE *file;
    file = fopen("appointment.dat", "w");
    if (file == NULL) {
        printf("Cannot write to file %s!", file_name);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++)
        fprintf(file, "%s\t%c\n", patients[i].name, patients[i].type);
}
