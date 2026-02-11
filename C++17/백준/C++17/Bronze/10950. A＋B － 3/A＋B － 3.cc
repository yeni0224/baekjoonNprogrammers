#include <iostream>
using namespace std;

int main()
{
    int a, b, testNum;
    cin >> testNum;

    for (int i = 0; i < testNum; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}