#include <ncurses.h>

using namespace std;

int main(int argc , char ** argv) {
    initscr();
    refresh();
  
    int c = getch();
    printw("%d",c);
    while(1) {
        int c = getch();
        printw("%d",c);
        if(c == 88)
            break;
    }
    endwin();
    return 0;
}
