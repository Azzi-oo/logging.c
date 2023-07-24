#include <stdio.h>

 

void coding(void);

void decod(void);

 

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("n/a");

        return 0;

    }

    if (argv[1][0]) == '0') {
        coding();

    }

    if (argv[1][0]) == '1') {
        decod();

    }

    return 0;

}

void coding(void) {

    int a;

    while ((a = getchar()) != '\n') {
        if (a != ' ') {
            printf("%x", a);

        } else {
            printf(" ");

        }

    }

    return 0;

}

void decod(void) {

    int a;

    while (scanf("%c", a); {
        printf("%c", a);

        if (getchar() == '\n') break;

        printf(" ");

    }

    return 0;

}
