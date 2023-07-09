#include <memory>

struct C{
    std::shared_ptr<C> m_child, m_parent;
};

int main() {
    auto parent = std::make_shared<C>();
    auto child = std::make_shared<C>();

    // 建立相互引用
    parent->m_child = child;
    child->m_parent = parent;
    
    parent = nullptr;   // parent不会被释放
    child = nullptr;    // child不会被释放
}
