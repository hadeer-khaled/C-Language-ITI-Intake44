#include <windows.h>
#include <stdio.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        int columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        printf("Number of columns: %d\n", columns);
    } else {
        printf("Error getting console information.\n");
    }

    return 0;
}
