#include <iostream>
#include <cstring>
using namespace std;

class StringConcat {
private:
    char str[100];
public:
    StringConcat(const char* s) {
        strcpy_s(str, s);
    }
    void display() {
        cout << str;
    }
    StringConcat operator+(StringConcat obj) {
        StringConcat temp("");
        strcpy_s(temp.str, str);
        strcat_s(temp.str, obj.str);
        return temp;
    }
};
int main() {
    char str1[50], str2[50];
    cout << "Enter first string: ";
    cin.getline(str1, 50);
    cout << "Enter second string: ";
    cin.getline(str2, 50);
    StringConcat s1(str1), s2(str2);
    StringConcat s3 = s1 + s2;

    cout << "After concatenation: ";
    s3.display();
    return 0;
}
