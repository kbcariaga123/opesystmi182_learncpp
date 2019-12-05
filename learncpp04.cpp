#include <iostream>
using namespace std;

int main ()
{
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = i; j < 8; j++)
            cout << "." << endl;
        cout << "\n" << endl;
    }
}
