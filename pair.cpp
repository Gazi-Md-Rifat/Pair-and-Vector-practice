#include <iostream>
using namespace std;

int main()
{

    pair<int, string> value,element;
    element = {2, "hi"};
    value = make_pair(1, "hello");
    cout << value.first << endl << value.second;
    cout << endl;
    cout << element.first;
    return 0;
}