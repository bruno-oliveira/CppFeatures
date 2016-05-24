// textin2.cpp -- using cin.get(char)
#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch); // use the cin.get(ch) function
    /*
    while (cin.get(ch)) // while input is successful
    {
    ... // do stuff
    }
    */

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch); // use it again
    }
    cout << endl << count << " characters read\n";
    return 0;
}
