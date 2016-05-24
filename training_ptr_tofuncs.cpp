//Simple training ptr to functions
#include <iostream>
using namespace std;

double add(double, double);
double multiply(double, double);
double compute(double, double, double (*pf)(double,double)); //receives 2 args and a ptr to a func

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        cout << "Computing the sum " << endl;
        cout << compute(a,b,add) << endl;
        cout << "------------" << endl;
        cout << "Computing the product" << endl;
        cout << compute(a,b,multiply) << endl;
    }
    return 0;
}

double add(double a, double b)
{
    return a+b;
}

double multiply(double a, double b)
{
    return a*b;
}

double compute(double a, double b, double (*pf)(double,double))
{
    double result = (*pf)(a,b);
    return result;
}


