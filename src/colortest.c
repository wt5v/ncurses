/**
 * colortest.c
 */

#include <ncurses.h>

int main()
{
    initscr();

    if (!has_colors())
    {
	endwin();
	puts("Terminial cannot do colors");
	return(1);
    }

    if (start_color() != OK) 
    {
	endwin();
	puts("Unable to start colors");
	return(1);
    }

    printw("Colors initialized.\n");
    printw("%d colors available.\n", COLORS);
    printw("%d color pairs.", COLOR_PAIRS);
    refresh();
    getch();

    endwin();
    return(0);
}

