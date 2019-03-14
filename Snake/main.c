#include <ncurses.h>

int main()
{
	initscr();
	printw("HELLO WORLD!");
	
	refresh();	
	getch();
	endwin();
}
