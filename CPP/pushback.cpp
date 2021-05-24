#include <iostream>
#include <vector>
using namespace std;

int main() 
{

    vector <int> v = {6,7,5,456,45,2};
    v.push_back(2);
    v.push_back(5);

    cout << v.size() << endl;
    cout << v[2] << endl;


    return 0;
}