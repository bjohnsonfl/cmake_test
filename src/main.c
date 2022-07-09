#include "api.h"
#include "app1.h"
#include "app2.h"

#include <stdio.h>

void main_set_g_foo (int arg){
    printf("main.c setting g_foo = %d\n", arg);
    g_foo = arg;
    printf("main.c set g_foo = %d\n\n", g_foo);
    
}

void main_print_g_foo (){
    printf("main.c g_foo = %d, addr %p\n\n", g_foo, &g_foo);
}

void print(){
    printf("PRINTING G_FOO...\n");
    main_print_g_foo();
    api_print_g_foo();
    app1_print_g_foo();
}

void set_g_foo(int arg){
    printf("SETTING G_FOO to %d...\n", arg);
    print();
    main_set_g_foo(arg);
    api_set_g_foo(arg);
    app1_set_g_foo(arg);
    print();

    printf("------------------------\n\n\n");
}



int main(){
    printf("Main:\n");

    print();
    set_g_foo(9);

    api_set_g_foo(4);
    print();

    main_set_g_foo(2);
    print();

    app1_set_g_foo(6);
    print();
    
    return 0;
}