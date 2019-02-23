/**
 * ncurses_chars.c
 */
#include <ncurses.h>

void color_char(chtype c);

int main(void)
{
    initscr();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_CYAN, COLOR_BLACK);

    attrset(COLOR_PAIR(2) | A_STANDOUT);
    mvprintw(0,35,"NCURSES EXTENDED CHARACTERS\n\n");
    attrset(A_NORMAL);

    printw("Upper left corner         ");
    color_char(ACS_ULCORNER);
    printw("  ACS_ULCORNER\t\t");
    printw("Lower left corner         ");
    color_char(ACS_LLCORNER);
    printw("  ACS_LLCORNER\n");
    printw("Upper right corner        ");
    color_char(ACS_URCORNER);
    printw("  ACS_URCORNER\t\t");
    printw("Lower right corner        ");
    color_char(ACS_LRCORNER);
    printw("  ACS_LRCORNER\n");
    printw("Tee pointing right        ");
    color_char(ACS_LTEE);
    printw("  ACS_LTEE\t\t\t");
    printw("Tee pointing left         ");
    color_char(ACS_RTEE);
    printw("  ACS_RTEE\n");
    printw("Tee pointing up           ");
    color_char(ACS_BTEE);
    printw("  ACS_BTEE\t\t\t");
    printw("Tee pointing down         ");
    color_char(ACS_TTEE);
    printw("  ACS_TTEE\n");
    printw("Horizontal line           ");
    color_char(ACS_HLINE);
    printw("  ACS_HLINE\t\t\t");
    printw("Vertical line             ");
    color_char(ACS_VLINE);
    printw("  ACS_VLINE\n");
    printw("Large Plus or cross over  ");
    color_char(ACS_PLUS);
    printw("  ACS_PLUS\t\t\t");
    printw("Scan Line 1               ");
    color_char(ACS_S1);
    printw("  ACS_S1\n");
    printw("Scan Line 3               ");
    color_char(ACS_S3);
    printw("  ACS_S3\t\t\t");
    printw("Scan Line 7               ");
    color_char(ACS_S7);
    printw("  ACS_S7\n");
    printw("Scan Line 9               ");
    color_char(ACS_S9);
    printw("  ACS_S9\t\t\t");
    printw("Diamond                   ");
    color_char(ACS_DIAMOND);
    printw("  ACS_DIAMOND\n");
    printw("Checker board (stipple)   ");
    color_char(ACS_CKBOARD);
    printw("  ACS_CKBOARD\t\t");
    printw("Degree Symbol             ");
    color_char(ACS_DEGREE);
    printw("  ACS_DEGREE\n");
    printw("Plus/Minus Symbol         ");
    color_char(ACS_PLMINUS);
    printw("  ACS_PLMINUS\t\t");
    printw("Bullet                    ");
    color_char(ACS_BULLET);
    printw("  ACS_BULLET\n");
    printw("Arrow Pointing Left       ");
    color_char(ACS_LARROW);
    printw("  ACS_LARROW\t\t\t");
    printw("Arrow Pointing Right      ");
    color_char(ACS_RARROW);
    printw("  ACS_RARROW\n");
    printw("Arrow Pointing Down       ");
    color_char(ACS_DARROW);
    printw("  ACS_DARROW\t\t\t");
    printw("Arrow Pointing Up         ");
    color_char(ACS_UARROW);
    printw("  ACS_UARROW\n");
    printw("Board of squares          ");
    color_char(ACS_BOARD);
    printw("  ACS_BOARD\t\t\t");
    printw("Lantern Symbol            ");
    color_char(ACS_LANTERN);
    printw("  ACS_LANTERN\n");
    printw("Solid Square Block        ");
    color_char(ACS_BLOCK);
    printw("  ACS_BLOCK\t\t\t");
    printw("Less/Equal sign           ");
    color_char(ACS_LEQUAL);
    printw("  ACS_LEQUAL\n");
    printw("Greater/Equal sign        ");
    color_char(ACS_GEQUAL);
    printw("  ACS_GEQUAL\t\t\t");
    printw("Pi                        ");
    color_char(ACS_PI);
    printw("  ACS_PI\n");
    printw("Not equal                 ");
    color_char(ACS_NEQUAL);
    printw("  ACS_NEQUAL\t\t\t");
    printw("UK pound sign             ");
    color_char(ACS_STERLING);
    printw("  ACS_STERLING\n\n");

    refresh();
    getch();
    endwin();
    return 0;
}

void color_char(chtype c)
{
    attrset(COLOR_PAIR(1) | A_BOLD);
    addch(c);
    attrset(A_NORMAL);
}
