#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i < 101; i++)
    {
        if (i % 15 == 0)
            cout << "fizzbuzz" << endl;
        else if (i % 3 == 0)
            cout << "buzz" << endl;
        else if (i % 5 == 0)
            cout << "buzz" << endl;
        else
            cout << i << endl;
    }
}
