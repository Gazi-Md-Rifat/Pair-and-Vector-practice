#include <iostream>
#include <vector>
using namespace std;


void print_vector(vector<int> &elelment){

    cout << "your vectro is : ";
    for (int i = 0; i < elelment.size(); i++){
        cout << elelment[i] << endl;
    }
    elelment.push_back(5);


}

int main (){

    vector<int> element;
    cout << "put your vector size : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        element.push_back(x);
    }   
    print_vector(element);
    vector<int> &element_2 = element;
    // element_2.push_back(2);
    // element_2.push_back(3);
    // element_2.push_back(4);
    print_vector(element_2);
    print_vector(element);
    print_vector(element_2);




    return 0;
}