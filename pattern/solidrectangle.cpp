#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    // cout << "enter your size of rectangle";
    // cin >> n;
   
int ascii;
 cout << "Enter your ascii value";
    cin >> ascii;
    for (int i = 0; i <= n; i++)
    {

        for (int j = ascii; j <= n+ascii; j++)
        {

            cout << char(j) << " ";
        }

        cout << endl;
    }
}
// for (int i = 1; i <= n; i++)
// {

//     for (int j = 1; j <= 2 * i - 1; j += 2)
//     {

//         cout << j << " ";
//     }
//     cout << endl;
// }
