/* Using pointers and creating structures via both
   value and address representations */
#include <iostream>
using namespace std;

struct things
{
    int good;
    int bad;
};

int main()
{
    int x = 10;
    int* y = &x;
    cout << "Value perspective: " "x = " << x << " and the address in memory is &x = " << &x << endl;
    cout << "y is a pointer-to-int.\
    The value stored in the address pointed by y is *y " << *y << " y is the address " << y << endl;

    things t = {7,8};
    cout << "the thing t is at: " << &t << endl;

    things* teste = new things;
    cout << "the thing teste is at: " << teste << endl;
    teste->good=5;
    teste->bad=9;
    cout << "Because (*teste) represents the value at teste address (the pointed-to value), using (*teste).good is\
    equivalent to using: teste->good \n because the pointed-to value is the sructure itself." <<  (*teste).good << endl;

    things* teste2 = &t; //teste 2 is a pointer-to-things
    cout << ((teste2 == &t) ? "teste2 and t are the same" : "teste2 and t are different") << endl;
    cout << "teste2->good = " << teste2->good << " and t.good = " << t.good << endl;
    cout << "We can change t via pointer: teste2->good = 10 " << endl;
    teste2->good = 10;
    cout << "Now t.good is: " << t.good;
    return 0;
}
