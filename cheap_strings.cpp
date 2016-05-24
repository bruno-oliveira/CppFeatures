/* Using pointers and dynamic memory allocation
   to save memory when reading many strings */
#include <iostream>
#include <cstring>
using namespace std;

//function prototype
char* readString(void);

int main()
{
    char* name; // create pointer but no storage
    name = readString(); // assign address of string to name
    cout << name << " at " << (int *) name << endl;
    delete [] name; // memory freed
    name = readString(); // reuse freed memory
    cout << name << " at " << (int *) name << endl;
    delete [] name; // memory freed again
    return 0;
}

char* readString()
{
    char tmp[80]; //big temporary array;
    cin >> tmp;
    char* dynamic_str = new char[strlen(tmp)+1];
    strcpy(dynamic_str,tmp); // copy string into smaller space
    return dynamic_str; //tmp is lost when function ends
}
