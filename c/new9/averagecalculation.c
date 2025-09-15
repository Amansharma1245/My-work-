#include <stdio.h>

#define EMP_COUNT 3

struct Employee {
    int id;
    char name[50];
    float basic;
    float da;
    float hra;
    float gross;
    float newGross;
};

int main() {
    struct Employee emp[EMP_COUNT];
    float daRate = 0.50;
    float hraRate = 0.10;
    float incrementRate = 0.10; 
        for(int i = 0; i < EMP_COUNT; i++) {
        printf("Enter details for Employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name); 

        emp[i].basic = 12500; 
        emp[i].da = emp[i].basic * daRate;
        emp[i].hra = emp[i].basic * hraRate;
        emp[i].gross = emp[i].basic + emp[i].da + emp[i].hra;
        emp[i].newGross = emp[i].gross + (emp[i].gross * incrementRate);
        printf("\n");
    }
    printf("-----------------------------------------------------\n");
    printf("ID\tName\t\tGross Salary\tNew Gross Salary\n");
    printf("-----------------------------------------------------\n");

    for(int i = 0; i < EMP_COUNT; i++) {
        printf("%d\t%-15s%.2f\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].gross, emp[i].newGross);
    }

    return 0;
}
