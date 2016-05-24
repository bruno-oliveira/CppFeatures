//Simple training ptr to functions
#include <iostream>
#include <cmath>
using namespace std;

double add(double, double);
double multiply(double, double);
double power(double, double);
double compute(double, double, double (*pf)(double,double)); //receives 2 args and a ptr to a func
void vector_of_operations(double, double, double (*pf[3])(double, double) ); //receives 2 args and a vector where each elem is
//a pointer to a function that returns a double and receives 2 double args

int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        double (*vec[3])(double, double) = {add,multiply,power};
        vector_of_operations(a,b,vec);
    }
    return 0;
}

double add(double a, double b)
{
    cout << "Sum: ";
    return a+b;
}

double multiply(double a, double b)
{
    cout << "Product: ";
    return a*b;
}

double power(double a, double b)
{
    cout << "Power: ";
    return pow(a,b);
}

double compute(double a, double b, double (*pf)(double,double))
{
    double result = (*pf)(a,b);
    return result;
}
void vector_of_operations(double a, double b, double (*pf[3])(double, double) )
{
    for(int i = 0; i < 3; i++)
    {
        cout << (*(pf+i))(a,b) << endl; //pf[i] also works
    }
}


