/* Dynamic array of structures */
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
    int num;
    cout << "Num of cars "; cin >> num;
    cin.get();

    car* teste = new car[num];
    for(int i = 0; i < num; i++)
    {
        char tmp[2500];
        //cout << "fds " << endl;
        cin.get(tmp,2500);
        cin.get();
        (teste+i)->make = new char[strlen(tmp)+1];
        strcpy((teste+i)->make,tmp);
        cin >> ((teste+i)->year);
        cin.get();
        //delete tmp;
    }
    for(int i = 0; i < num; i++)
    {
        cout << "Brand: " << teste[i].make << "\t" "Year: " << teste[i].year << endl;
    }
    delete[] teste;


    return 0;
}
