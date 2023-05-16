#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "put your array size : ";
    cin >> n;
    pair<int, int> element[n];

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        element[i] = {x, y};
    }

    cout << endl
         << endl
         << "your pair of arry is : " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {

        cout << "your array index is :" << i << endl;
        cout << element[i].first << " " << element[i].second << endl;
    }

    return 0;
}