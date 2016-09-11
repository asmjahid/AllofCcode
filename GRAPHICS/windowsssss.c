    #include <Windows.h>
    #include <stdio.h>
    void gotoxy(int x, int y)
    {
    // set the current cursor position
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }
    COORD getxy()
    {
    // get the current cursor position
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.dwCursorPosition;
    }
    int ndigits(int n)
    {
    // calculate the number of digits in an integer
    int x = 0;
    while( n > 0)
    {
    x++;
    n /= 10;
    }
    return x;
    }
    int main(int argc, char* argv[])
    {
    int x,y;
    COORD coord1, coord2;
    printf("Enter two numbers\n");
    coord1 = getxy();
    scanf("%d", &x);
    coord2 = getxy();
    if( coord2.Y != coord1.Y )
    {
    gotoxy(coord2.X+ndigits(x)+1, coord1.Y);
    }
    scanf("%d", &y);
    return 0;
    }
