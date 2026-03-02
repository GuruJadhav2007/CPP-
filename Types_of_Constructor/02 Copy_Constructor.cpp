#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Circle
{
    private :

        float Radii, Area, Circum;

        void Area_Of_Circle();
        void Circum_Of_Circle();

    public :

        Circle();               /// Default Constructor - Declaration
        Circle(Circle &cRef);   /// Copy Constructor - Declaration

        void Set_Radius();
        void Display_Details();

        ~Circle();
};

Circle :: Circle()              /// Default Constructor - Definition
{
    cout << "\n Inside Default Constructor" << endl;
}

Circle :: Circle(Circle &cRef)           /// Copy Constructor - Definition
{
    Radii  = cRef.Radii;
    Area = cRef.Area;
    Circum = cRef.Circum;

    cout << "\n Inside Copy Constructor. " << endl;
}

/// Member Functions Definition

void Circle :: Set_Radius()
{
    cout << "\n Enter Radius : ";
    cin >> Radii ;

    Area_Of_Circle();
    Circum_Of_Circle();
}

void Circle :: Area_Of_Circle()
{
    Area = 3.14 * Radii * Radii;

    cout << "\n Area of Circle is Calculated " << endl;
}

void Circle :: Circum_Of_Circle()
{
    Circum = 2 * 3.14 * Radii;

    cout << "\n Circumference of Circle is Calculated " << endl;
}

void Circle :: Display_Details()
{
    cout << "\n Radius of Circle is " << Radii << endl;
    cout << "\n Area of Circle is " << Area << endl;
    cout << "\n Circumference of Circle is " << Circum << endl;

    getch();
}

Circle :: ~Circle()
{
        cout << "\n Inside Distructor Object Deleted." << endl;
}

int main()
{
    Circle C1;          /// Object Created With Default Constructor

    C1.Set_Radius();
    getch();
    C1.Display_Details();

///  ////////////////////////////////////////////////////////////////

    Circle C2(C1);      /// Object Created With Copy Constructor

    C1.Set_Radius();
    C1.Display_Details();


    getch();
    return 0;
}
