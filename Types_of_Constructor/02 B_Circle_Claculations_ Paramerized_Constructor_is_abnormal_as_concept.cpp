#include<iostream>
#include<conio.h>

using namespace std;

class Circle
{
    public :
        float Radii, Area, Circum;

        Circle()    /// Default Constructor  OR Jar Constructor nahi Lihila tar te Synthesized Milto
        {
            Radii = Area = Circum = 0.0;
            cout << "\n Inside Default Constructor." << endl;
        }

        Circle(float R)  /// Parameterized constructor
        {
            Radii = R;
            Area = Circum = 0.0;
            cout << "\n Inside Parameterized Constructor 1." << endl;
        }

        Circle(float R, float A, float C)
        {
            Radii = R;
            Area = A;
            Circum = C;
            cout << "\n Inside Parameterized Constructor 2 " << endl;
        }


        /// Class Member Functions

        void Accept_Radius()
        {
            cout << "\n Enter a Radius : ";
            cin >> Radii;
        }

        void Area_Of_Circle()
        {
            Area = 3.14 * Radii * Radii;
            cout << "\n Area Calculated." << endl;
        }

        void Circumference_Of_Circle()
        {
            Circum = 2 * 3.14 * Radii;
            cout << "\n Circumference Calculated." << endl;
        }

        void Display_Details()
        {
            cout << "\n ====================================== \n";
            cout << "\n Radius is " << Radii << endl;
            cout << "\n Calculated Area is " << Area << endl;
            cout << "\n Calculated Circumfarance is " << Circum << endl;
            cout << "\n ====================================== \n";
        }
};

int main()
{
    Circle Circ1;   ///Object created with Default Constructor

    Circ1.Display_Details();
    Circ1.Accept_Radius();
    Circ1.Area_Of_Circle();
    Circ1.Circumference_Of_Circle();
    Circ1.Display_Details();

    /// /////////////////////////////////////////////////////////

    Circle Circ2(3);    /// Object Created with Parameterized Constructor 1

    Circ2.Display_Details();
    Circ2.Area_Of_Circle();
    Circ2.Circumference_Of_Circle();
    Circ2.Display_Details();

    /// /////////////////////////////////////////////////////////

    Circle Circ3(4.4,2.5,1.2);      /// Object Created with Parameterized Constructor 2

    Circ3.Display_Details();
    Circ3.Circumference_Of_Circle();
    Circ3.Area_Of_Circle();
    Circ3.Display_Details();

    getch();
    return 0;
}
