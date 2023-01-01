#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);
void printF();
void printA();
void printT();
void printI();
void printM();

main()
{
system("cls");
printF();
printA();
printT();
printI();
printM();
printA();

}


void gotoxy(int x ,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printF()
{ int x = 6 ,y = 6;
gotoxy(x,y);
cout<<"#############"<<endl;
gotoxy(x,y+1);
cout<<"#            "<<endl;
gotoxy(x,y+2);
cout<<"#            "<<endl;
gotoxy(x,y+3);
cout<<"###########  "<<endl;
gotoxy(x,y+4);
cout<<"#            "<<endl;
gotoxy(x,y+5);
cout<<"#            "<<endl;
gotoxy(x,y+6);
cout<<"#            "<<endl;
gotoxy(x,y+7);
cout<<"#            "<<endl;


}
void printA()
{
int x = 16 ,y = 6;
gotoxy(x,y);
cout<<"           #             "<<endl;
gotoxy(x,y+1);
cout<<"         #   #           "<<endl;
gotoxy(x,y+2);
cout<<"        #     #           "<<endl;
gotoxy(x,y+3);
cout<<"       #       #           "<<endl;
gotoxy(x,y+4);
cout<<"      ###########           "<<endl;
gotoxy(x,y+5);
cout<<"     #           #           "<<endl;
gotoxy(x,y+6);
cout<<"    #             #           "<<endl;
gotoxy(x,y+7);
cout<<"   #               #           "<<endl;
gotoxy(x,y+8);
cout<<"  #                 #           "<<endl;

}
void printT()
{
int x = 26 ,y = 6;
gotoxy(x,y);
cout<<"       ###########    "<<endl;
gotoxy(x,y+1);
cout<<"           ##         "<<endl;
gotoxy(x,y+2);
cout<<"           ##         "<<endl;
gotoxy(x,y+3);
cout<<"           ##         "<<endl;
gotoxy(x,y+4);
cout<<"           ##         "<<endl;
gotoxy(x,y+5);
cout<<"           ##         "<<endl;
gotoxy(x,y+6);
cout<<"           ##         "<<endl;
gotoxy(x,y+7);
cout<<"           ##         "<<endl;
cout<<endl;

}
void printI()
{
int x = 36 ,y = 6;
gotoxy(x,y);
cout<<"       ###########    "<<endl;
gotoxy(x,y+1);
cout<<"           ##         "<<endl;
gotoxy(x,y+2);
cout<<"           ##         "<<endl;
gotoxy(x,y+3);
cout<<"           ##         "<<endl;
gotoxy(x,y+4);
cout<<"           ##         "<<endl;
gotoxy(x,y+5);
cout<<"           ##         "<<endl;
gotoxy(x,y+6);
cout<<"           ##         "<<endl;
gotoxy(x,y+7);
cout<<"      #############   "<<endl;


}

void printM()
{
int x = 46 ,y = 6;
gotoxy(x,y);
cout<<" #            # "<<endl;
gotoxy(x,y+1);
cout<<" # #       #  # "<<endl;
gotoxy(x,y+2);
cout<<" #   #   #    # "<<endl;
gotoxy(x,y+3);
cout<<" #     #      # "<<endl;
gotoxy(x,y+4);
cout<<" #            # "<<endl;
gotoxy(x,y+5);
cout<<" #            # "<<endl;
gotoxy(x,y+6);
cout<<" #            # "<<endl;
gotoxy(x,y+7);
cout<<" #            # "<<endl;

}