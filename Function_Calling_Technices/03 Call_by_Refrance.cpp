#include<iostream>
#include<conio.h>

using namespace std;

void Refrance(int&);

int main()
{
    int No = 10;

    cout << No << endl;

    Refrance(No);

    cout << No << endl;

    getch();
    return 0;
}

void Refrance(int &Ref)
{
    cout << "Inside Function ..!" << endl;
    Ref++;
}
