#include <stdio.h>
struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks;
};

int main() {
    struct Student students[1]; ;
    for(int i = 0; i < 1; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        
        printf("Gender (M/F): ");
        scanf(" %c", &students[i].gender); 
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }
    printf("\n--- Student Information ---\n");
    for(int i = 0; i < 1; i++) {
        
        printf("Roll No: ");
        printf("%d", students[i].rollNo);
        
        printf("Name: ");
        printf("%d", students[i].name); 
        
        printf("Gender (M/F): ");
        printf(" %c", students[i].gender); 
        
        printf("Marks: ");
        printf("%f", students[i].marks);
        
        printf("\n");
    }

    return 0;
}
