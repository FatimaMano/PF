#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void gotoxy(int x, int y);
void clear(int x, int y, char previous);
void printPackman(int x, int y);
void showGhost(int x, int y);
char getCharAtxy(short int x, short int y);
void erase(int x, int y);
main()
{
    int pacmanX = 7; // X Coordinate of Pacman
    int pacmanY = 4; // Y Coordinate of Pacman
    bool gameRunning = true;
    system("cls");
    printMaze();
    printPackman(pacmanX, pacmanY);
    int gx1 = 2;
    int gy1 = 16;
    int gx2 = 4;
    int gy2 = 32;
    string direction1 = "right";
    string direction2 = "UP" ;
    char previousChar = ' ';
    showGhost(gx1, gy2);
    while (gameRunning)
    {
        // pacman
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX - 1;
                printPackman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanX = pacmanX + 1;
                printPackman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY + 1;
                printPackman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
            if (nextLocation == ' ')
            {
                erase(pacmanX, pacmanY);
                pacmanY = pacmanY - 1;
                printPackman(pacmanX, pacmanY);
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
        
    }
    // Ghost
    while (true)
    {
        // move Ghost functionality at horizontally
        if (direction1 == "right")
        {
            char nextLocation = getCharAtxy(gx1 + 1, gy1);
            if (nextLocation == ' ')
            {
                direction1 = "left";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx1, gy1, previousChar);
                gx1 = gx1 + 1;
                previousChar = nextLocation;
                showGhost(gx1, gy1);
            }
        }
        if (direction1 == "left")
        {
            char nextLocation = getCharAtxy(gx1 - 1, gy1);
            if (nextLocation == '#')
            {
                direction1 = "right";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx1, gy1, previousChar);
                gx1 = gx1 - 1;
                previousChar = nextLocation;
                showGhost(gx1, gy1);
            }
        }
        // move ghost at vertically
        if (direction2 == "UP")
        {
            char nextLocation = getCharAtxy(gx2 + 1, gy2);
            if (nextLocation == '#')
            {
                direction2 = "DOWN";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx2, gy2, previousChar);
                gy2 = gy2 + 1;
                previousChar = nextLocation;
                showGhost(gx2, gy2);
            }
        }
        if (direction2 == "UP")
        {
            char nextLocation = getCharAtxy(gx2 - 1, gy2);
            if (nextLocation == '#' || nextLocation == '%' || nextLocation == '|')
            {
                direction2 = "DOWN";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                clear(gx2, gy2, previousChar);
                gy2 = gy2 - 1;
                previousChar = nextLocation;
                showGhost(gx2, gy2);
            }
        }
    }
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void printPackman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void printMaze()
{
    cout << "#####################################################################################################################" << endl;
    cout << "!!.. .....................................................----------........................................ ....  ||" << endl;
    cout << "||.. %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%      ...                      %%%%%%%%%%%%%%%%%%%%%%%%%%%    |%|..     %%%%  ||" << endl;
    cout << "||..                  |%|         |%|      |%|...		   |%|                     |%|    |%|..      |%|            ||" << endl;
    cout << "||..                  |%|         |%|      |%|...		   |%|                     |%|    |%|..      |%|            ||" << endl;
    cout << "||..                  %%%%%%%%%%%%%%%      |%|...                   %%%%%%%%%%%%%%%%%%%%%%%%%%%    |%|..     %%%%  ||" << endl;
    cout << "||..                  |%|             ..   |%|... 	           ...........................       ..               . ||" << endl;
    cout << "||..                  %%%%%%%%%%%%%%% ..   |%|...                     %%%%%%%%%%%%%%%%%%%%%%%%%%%%   |%|..   %%%%  ||" << endl;
    cout << "||..                              |%| .    			   |%|.............                 |%|..    |%|.           ||" << endl;
    cout << "||..  .....     .............     |%| .      P		           |%|.............|%|              |%|..    |%|.       ||" << endl;
    cout << "||..|%|         |%|%%%%%%%|%|     |%| .|%|  			   |%|.............|%|    |%|..        ..   .|%|            ||" << endl;
    cout << "||..|%|         |%|       |%|     |%| .%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  .............|%|    |%|..        ..|%|    . ||" << endl;
    cout << "||..|%| .....     |%|       |%|..       .               .............|%|    			        .|%|    .           ||" << endl;
    cout << "||..|%|  .....     .............        .      	      .............|%|             		       . |%|    .       ||" << endl;
    cout << "||..|%|  .....     .............        .      	      .............|%|%%%%%%%%%%%%%%%%%%                . |%|  .||" << endl;
    cout << "||..            %%%%%%%%%%%%											                                            ||" << endl;
    cout << "||..  .....     .............     |%| .%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                  . |%|    			.       ||" << endl;
    cout << "||..           					     .............|%|					                                          ||" << endl;
    cout << "||..	       |%||%|			         .............|%|                                                             ||" << endl;
    cout << "||..  .....     .............     |%| .      	            .............|%|                 . |%|   			      ||" << endl;
    cout << "||..|%|	       |%||%|				     .............|%| 						                                  ||" << endl;
    cout << "||..|%|					             .............|%|%%%%%%%%%%%%%%%%%%%		                                  ||" << endl;
    cout << "||..|%|  .....     .............     |%| .      	                      .............|%|                 . |%|    . ||" << endl;
    cout << "||..|%|													                                                         ||" << endl;
    cout << "||..	       %%%%%%%%%%%%%											                                             ||" << endl;
    cout << "||..  .....     ...................................................................................................||" << endl;
    cout << "||..  .....     ...................................................................................................||" << endl;
    cout << "###################################################################################################################||" << endl;
}
void clear(int x, int y, char previous)
{
    gotoxy(x, y);
    cout << previous;
}
void showGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
