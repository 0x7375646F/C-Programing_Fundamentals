#include <stdio.h>

// Function with no parameter, no return type
void greet();

// Function with parameter but no return type
void printhehe(char *name);

// Function with no parameter but return type
char* give_secret();

// Function with parameter and return type
int give_secret_with_parameter(int a);

int main() {
    int i = 10; // declaration as well as initialization 
    int j; // declare variable
    j = 10; // initialize variable

    // call printhehe(char *name)
    printhehe("hello\n");

    // call function
    greet();

    int secretcode = give_secret_with_parameter(1);
    printf("Secret Key: %d\n", secretcode);

    char* secretMessage = give_secret();
    printf("%s\n", secretMessage);

    return 0;
}

// Function with no parameter but return type
// Initialize echo function
char* give_secret() {
    static char secretMessage[10] = "Grind on!";
    return secretMessage;
}

// Function with parameter and return type
// Initialize the give secret
int give_secret_with_parameter(int a) {
    return a + 69;
}

// Function with parameter and no return type
// Initialize the printhehe()
void printhehe(char *name) {
    printf("%s", name);
}

// Function without parameter and return type
// Initialize the greet() function!
void greet() {
    printf("Good, Afternoon!\n");
}