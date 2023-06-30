#include <iostream>
using namespace std;
int main() {
    
    int a = 6;
    int b = 7;
    
    cout<< (a&b) << endl; //6
    cout<< (a|b) << endl; //7
    cout<< (~a) <<endl;  //-7
    cout<< (~b) << endl;  // -8
    cout<< (a^b) << endl;  //1
    cout<< (a<<b) << endl;  //768
    cout<< (a>>b) << endl; // 0

    return 0;
}
