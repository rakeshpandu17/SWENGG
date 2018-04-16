/**************************************************************************
 **
 ** Product     : Console App for Baby Product Store
 ** Author      : Elangovan, Pandu Sadagopan
 ** Assignment  : Project01
 ** Course      : CS555 C++ For Programmers
 ** Term        : Spring, 2018
 ** School      : City University of Seattle
 ** Instructor  : Dr. Richard Gary
 **
 *************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    string custname;
    double a,b,c,d,discount,tax,totalsale,discountsale,payment;

    cout << "AAAAAAAAA ";

    cin >> custname;
    cout << "Enter Product A price  : ";
    cin >> a;
    cout << "Enter Product B price  : ";
    cin >> b;
    cout << "Enter Product C price  : ";
    cin >> c;
    cout << "Enter Product D price  : ";
    cin >> d;
    cout << "Enter the Discount in %: ";
    cin >> discount;
    

    cout << "Adding new line by JOE - Changes Made By Sadagopan Pandu"
    

    cout << "Adding new line by JOE - Changes Made By Sadagopan - New"

    totalsale = a+b+c+d;
    discountsale = totalsale - totalsale * (discount / 100);
    tax = discountsale * 0.1;
    payment = discountsale + tax;
    cout << "Customer Name          : " << custname << endl;
    cout << "Product A price is     : " << a << "$" << endl;
    cout << "Product B price is     : " << b << "$" << endl;
    cout << "Product C price is     : " << c << "$" << endl;
    cout << "Product D price is     : " << d << "$" << endl;
    cout << "Total Sale Price       : " << totalsale << "$" << endl;
    cout << "Discount               : " << discount << "%" << endl;
    cout << "Discounted Sale Price  : " << discountsale << "$" << endl;
    cout << "Your Savings           : " << totalsale-discountsale << "$" << endl;
    cout << "Total Payment          : " << payment << "$" << endl;
    
    return 0;
}

/**************************************************************************
 
 
 
 
 
 *************************************************************************/
