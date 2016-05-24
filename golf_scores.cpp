#include <iostream>
using namespace std;

const int NUM_SCORES = 10;
int arr[NUM_SCORES] = {0};

void read(int arr[], const int);
double process(int arr[], const int);
void show(int arr[], const int);

int main()
{
    read(arr,NUM_SCORES);
    double res = process(arr,NUM_SCORES);
    show(arr,NUM_SCORES);
    return 0;
}

void read(int* arr, const int NUM_SCORES)
{
   int nscores = 0;
   while(nscores < NUM_SCORES)
   {
       int val;
       cin >> val;
       if(val >= 0)
       {
           arr[nscores] = val;
           nscores++;
       }
   }
}

double process(int* arr, const int NUM_SCORES)
{
    double avg = 0.0;
    for(int i = 0; i<NUM_SCORES; i++)
    {
        avg+=arr[i];
    }
    avg = avg/NUM_SCORES;
    return avg;
}

void show(int* arr, const int NUM_SCORES)
{
    for(int j = 0; j < NUM_SCORES; j++)
        cout << arr[j] << " ";
    cout << endl;
    cout << "Avg is: " << process(arr,NUM_SCORES) << endl;
}
