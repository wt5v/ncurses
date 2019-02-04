/**
 * ctitle.c
 */

#include <ncurses.h>
#include <string.h>
#include <stdlib.h>

void center(int row, char *title);

int main()
{
    initscr();

    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    attrset(COLOR_PAIR(1) | A_BOLD | A_UNDERLINE);
    center(1, "Penguin Soccer Finals");
    
    init_pair(2, COLOR_RED, COLOR_BLACK);
    attrset(COLOR_PAIR(2) | A_BOLD);
    center(5, "Cattle dung samples from Temecula");
    
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    attrset(COLOR_PAIR(3) | A_BOLD);
    center(7, "Catatonic Theater");
    
    init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
    attrset(COLOR_PAIR(4) | A_BOLD);
    center(9, "Why do ions hate each other?");

    getch();

    endwin();
    return(EXIT_SUCCESS);
}

void center(int row, char *title)
{
    int len, indent, y, width, pos;

    getmaxyx(stdscr, y, width);

    len = strlen(title);

    if (len > width)
	exit(EXIT_FAILURE);

    indent = (width - len) / 2;

    if (indent < 0)
	exit(EXIT_FAILURE);

    for(pos = 0; pos < indent - 1; pos++)
	mvaddch(row, pos, '-');

    addch('[');

    mvaddstr(row, indent, title);
    mvaddch(row, pos + (len+1), ']');

    for(pos += (len + 2); pos < width; pos++)
	mvaddch(row, pos, '-');

    refresh();
}

