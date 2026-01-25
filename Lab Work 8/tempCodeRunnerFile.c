#include<stdio.h>

// structure
struct student{
    int id;
    char name[20];
    struct adddress
    {
        char country[20];
        char district[20];
        char local[20];
    }a;
    
};


int main(){
    int size = 2;
    struct student std[size];

    // input
    for(int i = 0; i < size; i++){
        printf("Enter data for itr_%d\n",i+1);

        printf("Enter id: ");
        scanf(" %s", std[i].id);
        
        printf("Enter Name: ");
        scanf(" %s", std[i].name);

        printf("Enter Country: ");
        scanf(" %s", std[i].a.country);

        printf("Enter District: ");
        scanf(" %s", std[i].a.district);

        printf("Enter Local Address: ");
        scanf(" %s", std[i].a.local);
    }

    // output
    for(int i = 0; i < size; i++){
        printf("Output data for itr_%d\n",i+1);

        printf("id: %s\n", std[i].id);
        
        printf("Name: %d\n", std[i].name);

        printf("Address: %s, %s, %s\n", std[i].a.local, std[i].a.district, std[i].a.country);
    }
    return 0;
}