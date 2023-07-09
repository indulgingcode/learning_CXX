#include <iostream>
#include <memory>

using namespace std;

struct C{
    C() {
        cout << "C construct" << endl;
    }

    ~C() {
        cout << "C destruct" << endl;
    }
};

int main() {
    std::unique_ptr<C> p = std::make_unique<C>();
    if (1) {
        cout << "return" << endl;
        return 1;
    }

}
