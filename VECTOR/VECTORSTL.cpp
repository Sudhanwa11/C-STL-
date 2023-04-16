#include <iostream>
#include <vector>
using namespace std;
int main() {
    //to create a vector
    vector<int> v;
    //to find capacity of a vector
    cout<< "capacity of vector is "<< v.capacity()<<endl; 
    
    //to add elements to vector
    v.push_back(1);
    cout<< "capacity of vector is "<< v.capacity()<<endl;
    v.push_back(2);
    cout<< "capacity of vector is "<< v.capacity()<<endl;
    v.push_back(3);
    cout<< "capacity of vector is "<< v.capacity()<<endl;
    
    //to find size of a vector
    cout<< "size of vector is "<< v.size() <<endl;
    
    //to find particular elements at an index
    cout<< "element at second is "<< v.at(2)<<endl;
    
    //to find first elment of vector
    cout<< "front element-> "<< v.front()<<endl;
    
    //to find last element of vector
    cout<< "last element-> "<< v.back()<<endl;
    
    //pop back to remove last element
    cout<< "before pop back case applied"<<endl;
    for (int i:v) {
        cout<< i << " ";
    }
    cout<<endl;
    v.pop_back();
    cout<< "after pop back case applied"<<endl;
    for (int i:v) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to clear a vector
    cout<< "before clear size "<<v.size()<<endl;
    v.clear();
    cout<< "after clearing size "<<v.size()<<endl;
    
    //to initialise a vector from a particular number
    vector<int> a(5,1);
    cout<< "vector a is "<<endl;
    for (int i:a) {
        cout<< i << " ";
    }
    cout<<endl;
    
    //to copy elements of one vector to another
    vector<int> b(a);
    cout<< "vector b is "<<endl;
    for (int i:b) {
        cout<< i << " ";
    }
}
