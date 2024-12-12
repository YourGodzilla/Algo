#include <stdio.h>

typedef struct Phone {
    char* name;
    char* cpu;
    int memory;
};

struct Laptop {
    char* name;
    char* cpu;
    int memory;
};

int main() {
    struct Phone iphone = {
        .name = "Iphone Pro Max",
        .cpu = "ARM",
        .memory = 8
    };

    struct Laptop Lenovo = {
        .name = "Thinkpad X",
        .cpu = "AMD",
        .memory = 16
    };
    
    printf("## Iphone ##\n");
    printf("Name : %s\n",iphone.name);
    printf("Cpu : %s\n",iphone.cpu);
    printf("Memory : %d\n",iphone.memory);

    printf("## Laptop ##\n");
    printf("Name : %s\n",Lenovo.name);
    printf("Cpu : %s\n",Lenovo.cpu);
    printf("Memory : %d\n",Lenovo.memory);

    return 0;
}