#include<iostream>
#include<conio.h>


using namespace std;

class Circle
{
    private :

            float Radii;
            float Area;
            float Circum;

            void Area_of_Circle();
            void Circumfrence_of_Circle();

    public :

            Circle();
            Circle(float R);
            Circle(Circle &cRef);

            void Set_Radius();
            void Display_Details();

            ~Circle();
};

/// Constructors of Class

Circle :: Circle()      /// Default Constructor - Definition
{
    Radii = Area = Circum = 0.0;

    cout << "\n Inside Default Constructor" << endl;
}

Circle :: Circle(float R)       /// Parameterized Constructor - Definition
{
    Radii = R;
    Area = Circum = 0.0;

    cout << "\n Inside Parameterized Constructor" << endl;
}

Circle :: Circle(Circle &cRef)      /// Copy Constructor - Definition
{
    Radii = cRef.Radii;
    Area = cRef.Area;
    Circum = cRef.Circum;

    cout << "\n Inside Copy Constructor" << endl;
}

///     Private Member Functions of class

void Circle :: Area_of_Circle()
{
    Area = 3.14 * Radii * Radii;

    cout << "\n Area is Calculated" << endl;
}

void Circle :: Circumfrence_of_Circle()
{
    Circum = 2 * 3.14 * Radii;

    cout << "\n Circumference Calculated" << endl;
}

///    Public Member Functions of class

void Circle :: Set_Radius()
{
    cout << "\n Enter Radius for Calculate Area & Circumference : " << endl;
    cin >> Radii;

    Area_of_Circle();
    Circumfrence_of_Circle();
}

void Circle :: Display_Details()
{
    cout << "\n =============*******=============" << endl;
    cout << "\n Radius of Circle is        : " << Radii << endl;    /// Private Data member
    cout << "\n Area of Circle is          : " << Area << endl;     /// Private Data member
    cout << "\n Circumference of Circle is : " << Circum << endl;   /// Private Data member
    cout << "\n =============*******=============" << endl;

    getch();
}

///     Destructor of Class

Circle :: ~Circle()
{
    cout << "\n Inside Destructor Object Deleted" << endl;
}


int main()
{
    Circle Cir1;

    Cir1.Set_Radius();
    Cir1.Display_Details();

    Circle Cir2(3.0);

    getch();
    Cir2.Display_Details();

    Circle Cir3(Cir1);

    Cir1.Set_Radius();

    Cir1.Display_Details();
    Cir3.Display_Details();


    getch();
    return 0;
}
