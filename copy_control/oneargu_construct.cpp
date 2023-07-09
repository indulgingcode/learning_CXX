#include <iostream>
#include <string>

struct Pig{
    std::string m_name;
    int m_weight;

    Pig(int weight) : m_weight(weight), m_name("一只重" + std::to_string(weight) + "kg的猪") {
    }
};

void show(Pig pig) {
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}

int main() {
    // 转换构造函数
    Pig pig1 = 100;
    std::cout << "name: " << pig1.m_name << std::endl;
    std::cout << "weight: " << pig1.m_weight << std::endl;
    // 直接初始化
    Pig pig2(110);
    std::cout << "name: " << pig1.m_name << std::endl;
    std::cout << "weight: " << pig1.m_weight << std::endl;
    // 转换构造函数
    show(120);
    // 只允许一次转换，不包含double到int的转换
    show(130.5);
    Pig pig3 = 140.5;
    std::cout << "name: " << pig3.m_name << std::endl;
    std::cout << "weight: " << pig3.m_weight << std::endl;
}
