/**
 * twinkle.c
 */

#include <ncurses.h>

int main()
{
    initscr();

    attron(A_BOLD);
    addstr("Twinkle, Twinkle little star.\n");
    attron(A_BLINK);
    addstr("How I wonder what your are.\n");
    attroff(A_BOLD);
    addstr("Up above the world so high,\n");
    addstr("Like a diamond in the sky.\n");
    attrset(A_NORMAL);
    addstr("Twinkle, Twinkle little star\n");
    addstr("How I wonder what your are.\n");
    refresh();
    getch();

    endwin();
    return(0);
}


