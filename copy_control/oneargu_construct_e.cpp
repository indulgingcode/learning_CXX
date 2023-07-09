#include <iostream>
#include <string>

struct Pig{
    std::string m_name;
    int m_weight;

    explicit Pig(int weight) : m_weight(weight), m_name("一只重" + std::to_string(weight) + "kg的猪") {
    }
};

int main() {
    // Pig pig = 100;  // 构造函数添加explicit后，编译错误
    Pig pig(100);      // 编译通过
    // 使用explicit声明的构造函数可以用static_cast进行转换
    std::cout << static_cast<Pig>(120).m_name << std::endl;
    
    std::cout << "name: " << pig.m_name << std::endl;
    std::cout << "weight: " << pig.m_weight << std::endl;
}
