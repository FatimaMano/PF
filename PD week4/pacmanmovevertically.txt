#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void playerMove(int x, int y);
void gotoxy(int x ,int y);
main()
{


system("cls");
int x = 2;
int y = 1;
printMaze();
while(true)
{
playerMove(x,y);
y+=1;
if(y > 13)
{
gotoxy(x,y-1);
cout<<" ";
x +=1;
if(x>80)
{
y = 1;;
}
if(y==13)
{
    y = 1;
}
}


}


}




void printMaze()
{

cout<<"########################################################################################"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"#                                                                                      #"<<endl;
cout<<"########################################################################################"<<endl;


}
void gotoxy(int x ,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void playerMove(int x, int y)
{
gotoxy(x,y-1);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);

}