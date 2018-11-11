#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int a = rand() %10;
    cout << a << endl;
    return 0;
}
