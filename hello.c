#include <stdio.h>

int main() {
    char name[50]; 

    printf("Enter your full name: ");
    // fgets is safer than scanf because it limits how many letters can be entered
    fgets(name, sizeof(name), stdin); 

    printf("Hello, %s! Welcome to your secure GitHub 2026 project.\n", name);
    
    return 0; 
}

