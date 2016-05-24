#include <iostream>
#include <cstring>
using namespace std;

int cnt_c_in_str(const char*, char);

int main()
{
    char* str = "dmmmbbmmdddmm";
    int a = cnt_c_in_str(str,'d');
    cout << a << endl;
    return 0;
}

int cnt_c_in_str(const char* str, char c)
{
    int tot = 0;
    while(*str)
    {
        if(*str==c)
            tot++;
        str++;
    }
    return tot;
}
