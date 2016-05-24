#include <iostream>
#include <cstring>
using namespace std;

struct car
{
    char* make;
    int year;
};

int main()
{
    char tmp[2500];
    cin.get(tmp,2500);
    car* teste = new car;
    teste->make = new char[strlen(tmp)+1];
    strcpy(teste->make,tmp);
    cin >> teste->year;

    cout << "The car structure data is " << endl;
    cout << teste->make << endl;
    cout << teste->year << endl;

    return 0;
}
