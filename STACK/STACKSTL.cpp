#include <iostream>
#include <stack>
using namespace std;

int main() {
    //to create stack
    stack<string> s;
    
    //to add elements
    s.push("love");
    s.push("sudhanwa");
    s.push("vaid");
    
    //to find top element
    cout<< "top element is "<<s.top()<<endl;
    cout<<endl;
    
    //to remove element
    s.pop();
    cout<< "now top element is "<<s.top()<<endl;
    cout<<endl;
    
    //to find size
    cout<< "size of stack "<<s.size()<<endl;
}
