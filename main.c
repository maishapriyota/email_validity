#include <stdio.h>
#include <stdlib.h>

int email_validity(char *emailval[]);

int main(int argc, char *argv[])
{
    switch(email_validity(argv)){
        case (-1):
            printf("ERROR MESSAGE : No argument for the main function.\n");
            break;
        case 1 :
            printf("The email is not valid.\n");
            break;
        default :
            printf("The email is absolutely valid.\n");
            break;
    }
    return 0;
}
