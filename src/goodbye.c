/**
 * goodbye.c
 */

#include <ncurses.h>

int main()
{
    initscr();

    addstr("Goodbye, Cruel World!");

    refresh();
    getch();

    endwin();

    return 0;
}

