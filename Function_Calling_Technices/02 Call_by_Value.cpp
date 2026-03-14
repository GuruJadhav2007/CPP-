#include<iostream>
#include<conio.h>

using namespace std;

int Value(int);

int main()
{
    int No = 10;

    cout << No << endl;

    No = Value(No);

    cout << No << endl;

    getch();
    return 0;
}

int Value(int i)
{
    cout << "Inside Function ..!" << endl;
    i++;

    return i;
}
