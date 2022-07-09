#include "api.h"
#include <stdio.h>

//int g_foo;


void api_set_g_foo (int arg){
    printf("api.c setting g_foo = %d\n", arg);
    g_foo = arg;
    printf("api.c set g_foo = %d\n\n", g_foo);
    
}

void api_print_g_foo (){
    printf("api.c g_foo = %d, addr = %p\n\n", g_foo, &g_foo);
}