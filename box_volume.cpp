#include <iostream>
using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void readBox(box*);
void displayBox(box*);

int main()
{
    box b;
    cout << "Before reading: " << endl;
    displayBox(&b);
    readBox(&b);
    displayBox(&b);
    return 0;
}

void readBox(box* b)
{
    cin >> (b)->maker;
    cin >> (b)->height;
    cin >> (b)->width;
    cin >> (b)->length;
    (b)->volume = (b)->height * (b)->width * (b)->length;
    cout << "Box read. Now displaying" << endl;
}

void displayBox(box* b)
{
    cout << b->maker << " - " << b->height << " - " << b->width << " - " << b->length << " - " << (*b).volume << endl;
}
