#include <iostream>
using namespace std;

class Counter {
public:
    int count;
    Counter(int c) {
        this->count = c;
    }
    Counter& operator++() {
        count++;
        return *this;
    }
    int display() {
        return count;
    }
};
int main(){
    Counter c1(0);
    Counter c2(0);

    cout << "Value of c1 :" << c1.display() << endl;
    cout << "Value of c2 :" << c2.display() << endl;

    ++c1;
    cout << "Value after increment of c1 :" << c1.display() << endl;

    ++c2;
    ++c2;
    cout << "Value after increment of c2 :" << c2.display() << endl;
    return 0;
}
