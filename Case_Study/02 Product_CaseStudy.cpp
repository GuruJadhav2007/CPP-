#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Product
{
    public :
            Product();
            ~Product();

    private :
            int PID;
            char P_Name[40];
            float P_Price;
            float S_Price;

            static int PCnt;

    protected :
            void Set_Value(char*, float, float);
            void Accept_Product();
            void Display_Product();
};

class Inventory : private Product
{
    public :
            Inventory();
            Inventory(char *, float, float);
            ~Inventory();

            void Get_Product();
            void Display_Product();
};

int Product :: PCnt = 0;

Product :: Product()
{
    cout << "\n Inside Product Default Constructor" << endl;

    PID = PCnt + 101;
    strcpy(P_Name,"");
    P_Price = 0.0f;
    S_Price = 0.0f;

    PCnt++;
}

void Product :: Set_Value(char PNm[], float PP, float SP)
{
    PID = PCnt + 101;
    strcpy(P_Name,PNm);
    P_Price = PP;
    S_Price = SP;

    PCnt++;
}

Product :: ~Product()
{
    cout << "\n Inside Product Destructor " << endl;
}

void Product :: Accept_Product()
{
    cout << "\n Enter Product Details for Product ID : " << PID << endl;

    cout << "\n Enter Product Name : ";
    cin.getline(P_Name,40);
    cout << "\n Enter Purchase Price : ";
    cin >> P_Price;
    cout << "\n Enter Sales Price : ";
    cin >> S_Price;

    cout << "\n Product Details Saved Successfully !" << endl;

    return;
}

void Product :: Display_Product()
{
    cout << "\n Product Details => " << endl;

    cout << "\n =============*****=============" << endl;

    cout << "\n Product ID     : " << PID << endl;
    cout << "\n Product Name   : " << P_Name << endl;
    cout << "\n Purchase Price : " << P_Price << endl;
    cout << "\n Sales Price    : " << S_Price << endl;

    cout << "\n =============*****=============" << endl;

    return;
}

/// Child Properties & Methods

Inventory :: Inventory()
{
    cout << "\n Inside Inventory Constructor" << endl;
}

Inventory :: Inventory(char PNm[], float PP, float SP)
{
    cout << "\n Inside Inventory Parameterized Constructor" << endl;

    Product :: Set_Value(PNm, PP, SP);
}

Inventory :: ~Inventory()
{
    cout << "\n Inside Inventory Destructor" << endl;
}

void Inventory :: Get_Product()
{
    Accept_Product();

    getch();
    system("cls");
}

void Inventory :: Display_Product()
{
    cout << "Inventory Display()";

    Product ::Display_Product();
}

int main()
{
    Inventory Iobj1,Iobj2("Laptop Dell", 30000, 40000);

    Iobj1.Get_Product();
    Iobj1.Display_Product();


    Iobj2.Display_Product();

    cout << "\n Back to Main()" << endl;

    return 0;
}
