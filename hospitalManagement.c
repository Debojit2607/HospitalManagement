#include <stdio.h>
#include <conio.h>

void main() {
    int choice, pcount = 0, dcount = 0, appointment = 0;
    char pname[100], dname[100], disease[100], time[100];

    while (1) {
        printf("Hospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Delete Patient\n");
        printf("4. Schedule Appointment\n");
        printf("5. View Appointments\n");
        printf("6. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter patient name: ");
                scanf("%s", pname);
                printf("Enter disease: ");
                scanf("%s", disease);
                printf("Enter doctor name: ");
                scanf("%s", dname);
                pcount++;
                printf("Patient added successfully!\n");
                break;

            case 2:
                if (pcount > 0) {
                    printf("Patient Name: %s\n", pname);
                    printf("Disease: %s\n", disease);
                    printf("Doctor Name: %s\n", dname);
                } else {
                    printf("No patients added!\n");
                }
                break;

            case 3:
                printf("Enter patient name to delete: ");
                scanf("%s", pname);
                if (strcmp(pname, pname) == 0) {
                    pcount--;
                    printf("Patient deleted successfully!\n");
                } else {
                    printf("Patient not found!\n");
                }
                break;

            case 4:
                printf("Enter patient name: ");
                scanf("%s", pname);
                printf("Enter doctor name: ");
                scanf("%s", dname);
                printf("Enter appointment time: ");
                scanf("%s", time);
                appointment++;
                printf("Appointment scheduled successfully!\n");
                break;

            case 5:
                if (appointment > 0) {
                    printf("Patient Name: %s\n", pname);
                    printf("Doctor Name: %s\n", dname);
                    printf("Appointment Time: %s\n", time);
                } else {
                    printf("No appointments scheduled!\n");
                }
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid option. Please choose again.\n");
        }
        getch();
    }
}