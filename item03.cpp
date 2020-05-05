#include <iostream>
#include <string>

class CTextBlock {
public:
    CTextBlock(const char *p)
            : text(p) {
    }

    void print() {
        std::cout << text << std::endl;
    }

    const char &operator[](std::size_t position) const {
        return text[position];
    }

    char &operator[](std::size_t position) {
        return const_cast<char &>(
                static_cast<const CTextBlock &>(*this)[position]
        );
    }

private:
    std::string text;
};

int main() {
    CTextBlock block("Hello World!");
    block.print();

    block[6] = 'f';

    block.print();

    return 0;
}
