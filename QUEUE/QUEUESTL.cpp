#include <iostream>
#include <queue>
using namespace std;
int main() {
    //to create stack
    queue<string> q;
    
    //to add elements
    q.push("love");
    q.push("sudhanwa");
    q.push("vaid");
    cout<< "initial size of queue is "<<q.size()<<endl;
    
    //to find first element
    cout<< "first element is "<<q.front()<<endl;
    
    q.pop();
    cout<< "after pop case first element is "<<q.front()<<endl;
    
    //to find size
    cout<< "after popcase size of queue is "<<q.size()<<endl;
}
