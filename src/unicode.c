/**
 * unicode.c
 */

#define _XOPEN_SOURCE_EXTENDED 1
#include <curses.h>
#include <locale.h>

int main()
{
    cchar_t heart = {
	A_NORMAL,
	L"\u2665"
    };

    setlocale(LC_CTYPE, "en_US.UTF-8");

    initscr();

    addstr("I ");
    add_wch(&heart);

    addstr(" Ncurses!\n");

    refresh();
    getch();

    endwin();
    return(0);
}

