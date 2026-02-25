#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
    private :
        float Rad, Area, Circum;

        void Area_Of_Circle()
        {
            Area = 3.14 * Rad * Rad;
            cout << "\n Area Calculated." << endl;
        }

        void Circumference_Of_Circle()
        {
            Circum = 2 * 3.14 * Rad;
            cout << "\n Circumference Calculated." << endl;
        }

    public :

        Circle()            /// Default Constructor
        {
            Rad = Area = Circum = 0.0;
            cout << "\n Inside Default Constructor." << endl;
        }

        Circle(float R)            /// Parameterized Constructor
        {
            Rad = R;
            Area = Circum = 0.0;
            cout << "\n Inside Parameterized Constructor1." << endl;

            Area_Of_Circle();
            Circumference_Of_Circle();
        }

        /// Member Functions
        void Accept_Radius()
        {
            cout << "\n Enter a Radius : ";
            cin >> Rad;

            Area_Of_Circle();
            Circumference_Of_Circle();
        }

        void Display_Details()
        {
            cout << "\n ========== ***** ========== \n ";

            cout << "\n Radius of Circle        : " << Rad;         /// Private Data Member
            cout << "\n Area of Circle          : " << Area;        /// Public Data Member
            cout << "\n Circumference of Circle : " << Circum;      /// Public Data Member

            cout << "\n ========== ***** ========== \n ";
        }
};

int main()
{
    Circle Cir1;        /// Object Created with Default Constructor1

    Cir1.Accept_Radius();
    /// Cir1.Area_Of_Circle();              /// Can't call Private Member Fun
    /// Cir1.Circumference_Of_Circle();     /// Can't call Private Member Fun
    getch();
    Cir1.Display_Details();

    /// cout << "\n Inside main R => " << Cir1.Rad << endl;   /// Can't call Private Member Fun
    /// cout << "\n Inside main Area => " << Cir1.Area << endl; /// Can't call Private Member Fun
    /// cout << "\n Inside main Circumference => " << Cir1.Circum << endl; /// Can't call Private Member Fun

    /// //////////////////////////////////////////////////////////////////////////

    Circle Cir2(5.3);      /// Object Created with Parameterized Constructor2

    Cir2.Display_Details();

    getch();
    return 0;
}

