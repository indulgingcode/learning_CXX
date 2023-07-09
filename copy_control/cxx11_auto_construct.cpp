#include <iostream>
#include <string>

struct Pig{
    int m_weight;
    std::string m_name;
};

void show(Pig p) {
    std::cout << p.m_name << " : " << p.m_weight << std::endl;
}

int main() {
    // 自动生成的构造函数不支持()
    // Pig pig1(10, "佩奇");
    Pig pig2{10, "佩奇"};
    Pig pig3 = {10, "佩奇"};

    // show(pig1);
    show(pig2);
    show(pig3);
}
