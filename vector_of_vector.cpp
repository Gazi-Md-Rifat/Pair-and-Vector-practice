#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector <int> &element){
    for (int i = 0; i < element.size(); i++){
        cout << "your value is : " << element[i] << endl;
    }
    return;
}
void print_vector_of_vector(vector<vector<int>>&n){
    for (int i = 0; i < n.size(); i++){
        for (int j = 0; j < n[i].size(); j++){
            
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
void me(vector<int> &value){
    cout <<  "value is : " << endl;
    for (int i = 0; i < value.size(); i++){
       cout << value[i] << " " ;
    }
    return;
}

int main (){

    cout << "vector ................ " << endl;

    vector<int> element;
        for (int i = 0; i < 5; i++){
            int x;
            cout << "put your value : ";
            cin >> x;
            element.push_back(x);
        }
        cout << endl << endl;
    print_vector(element);

    cout << endl << endl;
    cout << "vector of vector ............: " << endl;

    vector<vector<int>> value;

        for (int i = 0; i < 3; i++){
            vector<int> temp;
            for (int j = 0; j < 5; j++){
                int x;
                cout << "put your valur : ";
                cin >> x;
                temp.push_back(x);
            }
            value.push_back(temp);
        }

    cout << endl << endl;
   
//    two way to print vector of vector .....
    cout << "your vector of vector is ...........: " << endl;

    print_vector_of_vector(value); // first way to print vector of vectro...we pass vector of vector through funtion and use nested loop on global function for print the vector of vector....

    cout << endl << "second funtion ........................" << endl;
    for (int i = 0; i < value.size(); i++){  // second way to print vector of vector...we pass the vector[i] through funtion and print this given vector element..then we return and again pass vector[i+1] through funtion....
        me(value[i]) ;
        cout << endl;
        
    }

   



    return 0;
}