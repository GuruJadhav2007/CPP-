#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
    private :
            float Radii, Circum, Area;  /// Declaration of Private :- Data Member, Characteristics, Class Variable

    public :

            Circle()          /// Default Constructor / Syntesiced Constructor
            {
                Radii = Area = Circum = 0.0;   /// Initialization Avalable in Constructor
                cout << "\n Inside Default Constructor." << endl;
            }

            void Set() /// Class Function, Behavior, Member Function
            {
                cout << "\n Enter Radius To Find its Area & Circumference : " << endl;
                cin >> Radii;
            }

            void Area_of_Circle()
            {
                Area = 2 * 3.14 * Radii * Radii;
            }

            void Circumferance()
            {
                Circum = 2 * 3.14 * Radii;
            }

            void Display()
            {
                cout << "\n Radius of Circle is " << Radii << endl;
                cout << "\n Area of Circle is " << Area << endl;
                cout << "\n Circumference of Circle is " << Circum << endl;
            }
};


int main()
{
    Circle CirObj1;      /// Object Created with Default Constructor


    CirObj1.Display();

    CirObj1.Set();
    CirObj1.Area_of_Circle();
    CirObj1.Display();


    return 0;

}
