/*
    H4ck Software 2021

    <src/main.c>

    Main Function.

    Author: Joseph Hans Diaz Gonzalez <eliotvonecklie@gmail.com>
*/

#include "main.h"

void main()
{
    print("Zinc Firmware v0.1.0");
    
    if(post_test() == 0) {
        print(" - POST Check finished successfully!");
    }
    else {
        print(" - POST Check could not finish successfully!");
        return;
    }
    
    return;
}
