#include <iostream>
using namespace std;
class point{
        public:
        int x,y;
        void print(){
        cout << "{" << x << " , " << y << "}" << endl;
    }
}

int main(){
    point p1;
    p1.x = 6;
    p1.y = 7;
 
    point p2;
    p2.x = 21;
    p2.y = 37;
 
    point p3;
    p3.x = 0;
    p3.y = 0;
 
    p1.print();
    p2.print();
    p3.print();
 
    return 0;
}