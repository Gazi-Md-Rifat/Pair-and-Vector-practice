#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &element){
    element.push_back(95);
    
}
void print_vector_element(vector<int> &element_2){
    element_2.push_back(11);

    for (int i = 0; i < element_2.size(); i++){
        cout << element_2[i] << " ";
    }    
}

int main (){


    vector<int> element;
    element.push_back(5);
    element.push_back(6);
    element.push_back(7);

    vector<int> &element_2 = element;

    print_vector(element);
    print_vector_element(element_2);
    cout << endl;

    for (int i = 0; i < element_2.size(); i++){
        cout << element_2[i] << " ";
    } 


    return 0;
}