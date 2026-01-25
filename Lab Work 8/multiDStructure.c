#include <stdio.h>

struct student {
    int id;
    char name[20];
    struct address {
        char country[20];
        char district[20];
        char local[20];
    } a;
};

int main() {
    int size = 2;
    struct student std[size];

    for (int i = 0; i < size; i++) {
        printf("Enter data for itr_%d\n", i + 1);

        printf("Enter id: ");
        scanf("%d", &std[i].id);

        printf("Enter Name: ");
        scanf("%19s", std[i].name);

        printf("Enter Country: ");
        scanf("%19s", std[i].a.country);

        printf("Enter District: ");
        scanf("%19s", std[i].a.district);

        printf("Enter Local Address: ");
        scanf("%19s", std[i].a.local);
    }

    for (int i = 0; i < size; i++) {
        printf("\nOutput data for itr_%d\n", i + 1);
        printf("id: %d\t", std[i].id);
        printf("Name: %s\t", std[i].name);
        printf("Address: %s, %s, %s\n",
               std[i].a.local,
               std[i].a.district,
               std[i].a.country);
    }

    return 0;
}