#include "app1.h"
#include <stdio.h>

int g_foo;

void app1_set_g_foo (int arg){
    printf("app1.c setting g_foo = %d\n", arg);
    g_foo = arg;
    printf("app1.c set g_foo = %d\n\n", g_foo);
    
}

void app1_print_g_foo (){
    printf("app1.c g_foo = %d\n\n", g_foo);
}