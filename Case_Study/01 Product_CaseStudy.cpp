#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Product
{
    private :
            float P_ID;
            char P_Name[40];
            float P_Price;
            float S_Price;

    public :
            static int PCnt;

            Product();
            Product(char[], float, float);
            ~Product();

            void Accept_Product();
            void Display_Product();
};

int Product :: PCnt = 0;

Product :: Product()
{
    cout << "\n Inside Product Default Constructor" << endl;

    P_ID = PCnt + 101;
    strcpy(P_Name,"");
    P_Price = 0.0f;
    S_Price = 0.0f;

    PCnt++;
}

Product :: Product(char *PNm, float PP, float SP)
{
    cout << "Inside Product Parameterized Constructor" << endl;

    P_ID = PCnt + 101;
    strcpy(P_Name,PNm);
    P_Price = PP;
    S_Price = SP;

    PCnt++;
}

Product :: ~Product()
{
    cout << "\n Inside Product Destructor of Product ID : " << P_ID << endl;
}

void Product :: Accept_Product()
{
    cout << "\n Enter Product Details For ID " << P_ID << " => " << endl;

    cout << "\n Enter Product Name :" << endl;
    cin >> P_Name;

    cout << "\n Enter Purchase Price : " << endl;
    cin >> P_Price;

    cout << "\n Enter Sales Price : " << endl;
    cin >> S_Price;

    cout << "\n Details Saved Successfully" << endl;

    return;
}

void Product :: Display_Product()
{
    cout << "\n Product Details" << endl;

    cout << "\n Product ID : " << P_ID << endl;
    cout << "\n Product Name : " << P_Name << endl;
    cout << "\n Purchase Price : " << P_Price << endl;
    cout << "\n Sales Price : " << S_Price << endl;

    cout << "\n =============== ********* ===============" << endl;

    return;
}

int main()
{
    Product PObj1;
    Product PObj2("Notebook",40.0,50.0);
    Product PObj3;

    getch();

    PObj1.Accept_Product();
    PObj3.Accept_Product();

    getch();
    system("cls");

    PObj1.Display_Product();
    PObj2.Display_Product();
    PObj3.Display_Product();

    getch();

    cout << "\n Back to Main " << endl;

    getch();
    return 0;
}
