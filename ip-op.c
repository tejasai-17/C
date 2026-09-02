#include <stdio.h>

int main(){
    char name[50];
    int id;
    char college[100];

    printf("Enter your name :");
    scanf("%s", name);

    printf("Enter your ID :");
    scanf("%d", &id);

    printf("Enter your college name :");
    scanf("%s", college);

    printf("Name = %s\nID = %d\nCollege = %s\n", name, id, college);
    return 0;
}