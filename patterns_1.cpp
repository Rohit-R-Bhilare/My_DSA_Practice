// Draw patterns 
/*

*****
*****
*****
*****
*****

*/


#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the N value to print Patterns:";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}