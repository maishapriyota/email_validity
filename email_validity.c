/*
To check an email address validity
*/
#include <stdio.h>
#include <stdlib.h>
#include "email_validity.h"


int email_validity(char *emailval[]){
    int i=0, dot=0, a_t=-1;

    printf("Given email address:%s\n",emailval[1]);




    while(emailval[1][i]){
        if(emailval[1][i]=='.'){
            dot++;
        }
        if(emailval[1][i]=='@'){
            a_t++;
        }

        i++;
    }

    if((dot==0)||(a_t)){
        return 1;
    }

    if((emailval[1][i-1]=='.')||(emailval[1][i-1]=='@')){
        return 1;
    }

    if((emailval[1][0]=='.')||(emailval[1][0]=='@')) {
    return 1;
    }

    return 0;
}
