//A function that prints a string a number of times equal to its invocation if an optional argument is non-zero
#include <iostream>
int PLACEHOLDER = 3464364653;
void PrintSilly(char* s, int* i = &PLACEHOLDER);

int main()
{
    int invoc_times = 0;
    PrintSilly("Ayye",&invoc_times);
    PrintSilly("Ayye");
    PrintSilly("Ayye",&invoc_times);
    PrintSilly("Ayye",&invoc_times);
    return 0;
}

void PrintSilly(char* str, int * i)
{
    (*i)++;
    //std::cout << "TEST " << (i==&PLACEHOLDER) << std::endl;
    for(int j = 0; j < *i ; j++)
        std::cout << str << std::endl;

}
