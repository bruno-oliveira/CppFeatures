#include <iostream>
#include <string>
using namespace std;

struct contributors
{
    string name;
    double contribution;
};

int main()
{
    int num;
    cin >> num;
    bool have_grand=false;
    bool have_regular=false;
    contributors* arrayContrib = new contributors[num];
    for(int i = 0; i < num; i++)
    {
        cin >> (arrayContrib+i)->name;
        cin >> (arrayContrib+i)->contribution;
        if((arrayContrib+i)->contribution >= 10000)
        {
            have_grand=true;
        }
        else
        {
            have_regular=true;
        }
    }

    cout << ((have_grand==true)?"Grand Patrons":"none") << endl;
    for(int j = 0; j < num; j++)
    {
        if(arrayContrib[j].contribution >= 10000)
            cout << "contrib: " << arrayContrib[j].contribution << "  name " << arrayContrib[j].name << endl;
    }
    cout << ((have_regular==true)?"Patrons":"none" )<< endl;
    for(int j = 0; j < num; j++)
    {
        if(arrayContrib[j].contribution < 10000)
            cout << "contrib: " << arrayContrib[j].contribution << "  name " << arrayContrib[j].name << endl;
    }
    return 0;
}
