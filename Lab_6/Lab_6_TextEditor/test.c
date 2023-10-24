#include <windows.h>
#include <stdio.h>
#define SIZE 100


int main() {
 /*   CONSOLE_SCREEN_BUFFER_INFO csbi;

    char arr[SIZE];

    printf("Enter a sentence: ");
    scanf(" %100[^\n]", arr);
*/


    /*if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        int xCursorPos = csbi.dwCursorPosition.X;
        int yCursorPos = csbi.dwCursorPosition.Y;
        printf("Cursor position: X=%d, Y=%d\n", xCursorPos, yCursorPos);
    } else {
        printf("Error getting cursor position.\n");
    } */

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    DWORD count;

    int x = 0;

    while (1) {
        system("cls"); // Clear the console

        printf("Use arrow keys to move. Press 'q' to quit.\n");
        SetConsoleCursorPosition(hConsole, coord);

        char ch = _getch();

        switch (ch) {
            case 0xE0: // Arrow key (extended key)
                ch = _getch(); // Get the arrow key code
                if (ch == 75 && x > 0) { // Left arrow
                    x--;
                } else if (ch == 77 && x < 119) { // Right arrow (for a 120-column console)
                    x++;
                }
                break;
            case 'q':
                return 0;
        }
    }

    return 0;

}
