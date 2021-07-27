/*
    H4ck Software 2021

    <src/hardware/screen.h>

    40 Column Monochrome TTY Emulation Functions.

    Author: Joseph Hans Diaz Gonzalez <eliotvonecklie@gmail.com>
*/

#ifndef SCREEN_H
#define SCREEN_H

#include <string.h>

void screen_init(char flags);
void gotoxy(char x, char y);
void clear_screen();
void print_char(char ch);
void print(char* string);

#endif /*SCREEN_H*/
