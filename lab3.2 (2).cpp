#include <iostream>
using namespace std;
int main() {
    int i = 10;
    signed int si = -20;
    unsigned int ui = 30;
// explicit type casting to int
    int i_cast = static_cast<int>(si);
    std::cout << "signed int " << si << " cast to int: " << i_cast << std::endl;
// explicit type casting to signed int
    signed int si_cast = static_cast<signed int>(ui);
    std::cout << "unsigned int " << ui << " cast to signed int: " << si_cast << std::endl;
// explicit type casting to unsigned int
    unsigned int ui_cast = static_cast<unsigned int>(i);
    std::cout << "int " << i << " cast to unsigned int: " << ui_cast << std::endl;
    return 0;
}
