#include <iostream>
using namespace std;

double harmonic(int*, int*);

int main()
{
    int x, y;
    cin >> x >> y;
    while(x>0 and y>0)
    {
        cout << "Harmonic is " << harmonic(&x, &y) << endl;
        cin >> x >> y;
    }
    return 0;
}

double harmonic(int* x, int* y)
{
    return 2.0*(*x)*(*y)/(*x + *y);
}
