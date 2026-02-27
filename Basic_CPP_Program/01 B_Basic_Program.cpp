#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
     private :
            float Radii, Circum, Area;  /// Declaration of Private :- Data Member, Characteristics, Class Variable

     public :

        Circle()            /// Default Constructor / Syntesiced Constructor
        {
            Rad = Area = Circum = 0.0;
            cout << "\n Inside Default Constructor." << endl;
        }

        Circle(float R)            /// Parameterized Constructor
        {
            Rad = R;
            Area = Circum = 0.0;
            cout << "\n Inside Parameterized Constructor1." << endl;
        }

        /// Member Functions
        void Accept_Radius()
        {
            cout << "\n Enter a Radius : ";
            cin >> Rad;
        }

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

        void Display_Details()
        {
            cout << "\n ========== ***** ========== \n ";

            cout << "\n Radius of Circle        : " << Rad;
            cout << "\n Area of Circle          : " << Area;
            cout << "\n Circumference of Circle : " << Circum;

            cout << "\n ========== ***** ========== \n ";
        }
};

int main()
{
        Circle Cir1;        /// Object Created with Default Constructor

        getch();
        Cir1.Display_Details();

        Cir1.Accept_Radius();
        Cir1.Circumference_Of_Circle();
        Cir1.Area_Of_Circle();

        getch();
        Cir1.Display_Details();

        /// //////////////////////////////////////////////////////////////////////////

        Circle Cir2(5.3);      /// Object Created with Parameterized Constructor1
        getch();
        Cir2.Display_Details();

        Cir2.Circumference_Of_Circle();
        Cir2.Area_Of_Circle();

        getch();
        Cir2.Display_Details();

        getch();
        return 0;
}
