#include <iostream>
#include <bitset>

void InvertBits(uint8_t *x, size_t startbit , size_t length) {
    uint8_t mask = 0b00000000;
    size_t endbit = startbit + length;
    for (; startbit <= endbit; startbit++) {
        mask |= (1u << 8 - startbit);
        std::cout << std::bitset<8>(mask) << std::endl;
    }
        *x ^= mask;
}   
int main() {
    uint8_t x = 0b01110001;
    size_t length = 5;
    size_t startbit = 3;
    InvertBits(&x, startbit, length);
    std::cout << std::bitset<8>(x) << '\n';
    return 0;
}