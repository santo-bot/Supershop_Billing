#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{

    string name;
    int type;

    int phone, id, add;

    cout << fixed << setprecision(2);

    cout << "***Welcome to SSS Supershop***" << endl
         << " " << endl;

    cout << "-----Item's Catagory-----" << endl;

    cout
        << "     1. Grocery" << endl
        << "     2. Drinks" << endl
        << "     3. Cosmatics" << endl
        << "     4. Confectionary" << endl
        << " " << endl;
    cout << "Which type of product you wants to buy (Type the catagory number) : " << endl;
    cin >> type;
    cout << " " << endl
         << " " << endl;

    //--------------------------------------------------//

    if (type == 1)
    {
        double q1, q2, q3, q4, q5, q6, gr, go, gf, gs, gsp, gg, gtotal;
        cout << "----------Select your product's quantity(1,1.5,2,2.5.....)----------" << endl
             << " " << endl;

        cout << "SL.NO - g1  : Rice    = 70 taka per kg      ----- Select Quantity : ";
        cin >> q1;
        cout << "SL.NO - g2  : Oil     = 170 taka per liter  ----- Select Quantity : ";
        cin >> q2;
        cout << "SL.NO - g3  : Flour   = 60 taka per kg      ----- Select Quantity : ";
        cin >> q3;
        cout << "SL.NO - g4  : Suger   = 140 taka per kg     ----- Select Quantity : ";
        cin >> q4;
        cout << "SL.NO - g5  : Spices  = 40 taka per packet  ----- Select Quantity : ";
        cin >> q5;
        cout << "SL.NO - g6  : Ghee    = 300 taka per can    ----- Select Quantity : ";

        cin >> q6;

        cout << "  " << endl
             << " " << endl;

        cout << "Your name : " << endl;
        cin >> name;
        cout << "Phone Number : " << endl;
        cin >> phone;
        cout << "Your ID : " << endl;
        cin >> id;

        cout << " " << endl;

        cout << "Hello " << name << " " << endl;

        cout << "Here's your buying item's list" << endl
             << " " << endl;
        ;

        if (q1 > 0)
        {
            gr = 70 * q1;
            cout << "Rice    : " << q1 << " kg      = " << gr << " Taka" << endl;
        }

        if (q2 > 0)
        {
            go = 170 * q1;
            cout << "oil     : " << q2 << " kg      = " << go << " Taka" << endl;
        }

        if (q3 > 0)
        {
            gf = 60 * q1;
            cout << "Flour   : " << q3 << " kg      = " << gf << " Taka" << endl;
        }

        if (q4 > 0)
        {
            gs = 140 * q1;
            cout << "Suger   : " << q4 << " kg      = " << gs << " Taka" << endl;
        }

        if (q5 > 0)
        {
            gsp = 40 * q1;
            cout << "Spices  : " << q5 << " Packet  = " << gsp << " Taka" << endl;
        }

        if (q6 > 0)
        {
            gg = 300 * q1;
            cout << "Ghee    : " << q6 << " Can     = " << gg << " Taka" << endl;
        }

        cout << " " << endl
             << " " << endl;

        gtotal = (gr + go + gf + gg + gsp + gs);

        cout << "Your Grocery item's total = " << gtotal << " Taka." << endl
             << endl;

        cout << "-----Thanks for shopping from our shop-----" << endl
             << "--------------Have a nice day--------------" << endl
             << " " << endl;
    }

    //-------------------------------------------------//

    //------------------------------------------------//

    if (type == 2)
    {
        double q1, q2, q3, q4, q5, q6, dj, dc, dl, dm, dp, dla, dtotal;
        cout << "----------Select you item and quantity----------" << endl
             << " " << endl;

        cout << "SL.NO - d1  : Juice      = 50  taka  600 ml        ----- Select Quantity : ";
        cin >> q1;
        cout << "SL.NO - d2  : Coke       = 30  taka  250 ml        ----- Select Quantity : ";
        cin >> q2;
        cout << "SL.NO - d3  : Lemonate   = 80  taka  1000 ml       ----- Select Quantity : ";
        cin >> q3;
        cout << "SL.NO - d4  : Milk       = 100 taka  1000 ml       ----- Select Quantity : ";
        cin >> q4;
        cout << "SL.NO - d5  : Pepsi      = 40  taka  400 ml        ----- Select Quantity : ";
        cin >> q5;
        cout << "SL.NO - d6  : Lassi      = 50  taka  500 ml        ----- Select Quantity : ";
        cin >> q6;

        cout << "  " << endl
             << " " << endl;

        cout << "Your name : " << endl;
        cin >> name;
        cout << "Phone Number : " << endl;
        cin >> phone;
        cout << "Your ID : " << endl;
        cin >> id;

        cout << " " << endl;

        cout << "Hello " << name << " " << endl;

        cout << "Here's your buying item's list" << endl
             << " " << endl;
        ;

        if (q1 > 0)
        {
            dj = 50 * q1;
            cout << "Juice      : " << q1 << " Bottle      = " << dj << " Taka" << endl;
        }

        if (q2 > 0)
        {
            dc = 30 * q1;
            cout << "Coke       : " << q2 << " Bottle      = " << dc << " Taka" << endl;
        }

        if (q3 > 0)
        {
            dl = 80 * q1;
            cout << "Lemonate   : " << q3 << " Liter       = " << dl << " Taka" << endl;
        }

        if (q4 > 0)
        {
            dm = 100 * q1;
            cout << "Milk       : " << q4 << " Liter       = " << dm << " Taka" << endl;
        }

        if (q5 > 0)
        {
            dp = 40 * q1;
            cout << "Pepsi      : " << q5 << " Bottle      = " << dp << " Taka" << endl;
        }

        if (q6 > 0)
        {
            dla = 50 * q1;
            cout << "Lassi      : " << q6 << " Bottle      = " << dla << " Taka" << endl;
        }

        cout << " " << endl
             << " " << endl;

        dtotal = (dj + dc + dp + dm + dl + dla);

        cout << "Your Drinks item's total = " << dtotal << " Taka." << endl
             << endl;

        cout << "-----Thanks for shopping from our shop-----" << endl
             << "--------------Have a nice day--------------" << endl
             << " " << endl;
    }

    //------------------------------------------------//

    //------------------------------------------------//

    if (type == 3)
    {
        cout << "----------Select you item and quantity----------" << endl
             << " " << endl;

        double q1, q2, q3, q4, q5, q6, c1, c2, c3, c4, c5, c6, ctotal;
        cout << "----------Select you item and quantity----------" << endl;

        cout << "SL.NO - c1  : Facewash(men)         = 180 taka        ----- Select Quantity : ";
        cin >> q1;
        cout << "SL.NO - c2  : Facewash(Women)       = 200 taka        ----- Select Quantity : ";
        cin >> q2;
        cout << "SL.NO - c3  : Shampoo               = 240 taka        ----- Select Quantity : ";
        cin >> q3;
        cout << "SL.NO - c4  : Soap                  = 60 taka         ----- Select Quantity : ";
        cin >> q4;
        cout << "SL.NO - c5  : Handwash              = 150 taka        ----- Select Quantity : ";
        cin >> q5;
        cout << "SL.NO - c6  : Facecream             = 300 taka        ----- Select Quantity : ";
        cin >> q6;

        cout << "  " << endl
             << " " << endl;

        cout << "Your name : " << endl;
        cin >> name;
        cout << "Phone Number : " << endl;
        cin >> phone;
        cout << "Your ID : " << endl;
        cin >> id;

        cout << " " << endl;

        cout << "Hello " << name << " " << endl;

        cout << "Here's your buying item's list" << endl
             << " " << endl;
        ;

        if (q1 > 0)
        {
            c1 = 180 * q1;
            cout << "Juice      : " << q1 << " Bottle      = " << c1 << " Taka" << endl;
        }

        if (q2 > 0)
        {
            c2 = 200 * q1;
            cout << "Coke       : " << q2 << " Bottle      = " << c2 << " Taka" << endl;
        }

        if (q3 > 0)
        {
            c3 = 240 * q1;
            cout << "Lemonate   : " << q3 << " Liter       = " << c3 << " Taka" << endl;
        }

        if (q4 > 0)
        {
            c4 = 60 * q1;
            cout << "Milk       : " << q4 << " Liter       = " << c4 << " Taka" << endl;
        }

        if (q5 > 0)
        {
            c5 = 150 * q1;
            cout << "Pepsi      : " << q5 << " Bottle      = " << c5 << " Taka" << endl;
        }

        if (q6 > 0)
        {
            c6 = 300 * q1;
            cout << "Lassi      : " << q6 << " Bottle      = " << c6 << " Taka" << endl;
        }

        cout << " " << endl
             << " " << endl;

        ctotal = (c1 + c2 + c3 + c4 + c5 + c6);

        cout << "Your Cosmatic item's total = " << ctotal << " Taka." << endl
             << endl;

        cout << "-----Thanks for shopping from our shop-----" << endl
             << "--------------Have a nice day--------------" << endl
             << " " << endl;
    }

    //-----------------------------------------------//

    //-----------------------------------------------//

    if (type == 4)
    {
        cout << "----------Select you item and quantity----------" << endl
             << " " << endl;

        double q1, q2, q3, q4, q5, q6, con1, con2, con3, con4, con5, con6, contotal;

        cout << "SL.NO - con1  : Biscuit         = 80  taka        ----- Select Quantity : ";
        cin >> q1;
        cout << "SL.NO - con2  : Cake            = 400 taka        ----- Select Quantity : ";
        cin >> q2;
        cout << "SL.NO - con3  : Bread           = 90  taka        ----- Select Quantity : ";
        cin >> q3;
        cout << "SL.NO - con4  : Jam             = 180 taka         ----- Select Quantity : ";
        cin >> q4;
        cout << "SL.NO - con5  : Butter          = 150 taka        ----- Select Quantity : ";
        cin >> q5;
        cout << "SL.NO - con6  : Ice-cream       = 420 taka        ----- Select Quantity : ";
        cin >> q6;

        cout << "  " << endl
             << " " << endl;

        cout << "Your name : " << endl;
        cin >> name;
        cout << "Phone Number : " << endl;
        cin >> phone;
        cout << "Your ID : " << endl;
        cin >> id;

        cout << " " << endl;

        cout << "Hello " << name << " " << endl;

        cout << "Here's your buying item's list" << endl
             << " " << endl;
        ;

        if (q1 > 0)
        {
            con1 = 80 * q1;
            cout << "Biscuit      : " << q1 << " Bottle      = " << con1 << " Taka" << endl;
        }

        if (q2 > 0)
        {
            con2 = 400 * q1;
            cout << "Cake        : " << q2 << " Pound         = " << con2 << " Taka" << endl;
        }

        if (q3 > 0)
        {
            con3 = 90 * q1;
            cout << "Bread       : " << q3 << " Loaf          = " << con3 << " Taka" << endl;
        }

        if (q4 > 0)
        {
            con4 = 180 * q1;
            cout << "Jam         : " << q4 << " Jar            = " << con4 << " Taka" << endl;
        }

        if (q5 > 0)
        {
            con5 = 150 * q1;
            cout << "Butter      : " << q5 << " Cube           = " << con5 << " Taka" << endl;
        }

        if (q6 > 0)
        {
            con6 = 420 * q1;
            cout << "Ice-cream   : " << q6 << " Liter          = " << con6 << " Taka" << endl;
        }

        cout << " " << endl
             << " " << endl;

        contotal = (con1 + con2 + con3 + con4 + con5 + con6);

        cout << "Your Confectionary item's total = " << contotal << " Taka." << endl
             << endl;

        cout << "-----Thanks for shopping from our shop-----" << endl
             << "--------------Have a nice day--------------" << endl
             << " " << endl;
    }
    //---------------------------------------------------------------------------//

    //----------------------------------------------------------------------------//
}
