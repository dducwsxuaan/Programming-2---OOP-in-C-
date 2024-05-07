#include<stdio.h>
struct CEO{
    char name[20];
    int year_of_birth;
};

struct Company{
    char name[20];
    struct CEO ceo;
};

int main(){
    struct Company company;
    printf("Enter company name: ");
    scanf("%s", company.name);
    printf("Enter CEO name: ");
    scanf("%s", company.ceo.name);
    printf("Enter CEO year of birth: ");
    scanf("%d", &company.ceo.year_of_birth);
    printf("Company name: %s\n", company.name);
    printf("CEO name: %s\n", company.ceo.name);
    printf("CEO year of birth: %d\n", company.ceo.year_of_birth);
    return 0;
}