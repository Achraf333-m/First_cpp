#include <iostream>

int main() {
    int file_size = 100;
    int sales = 9;

    int bucket = sales;
    sales = file_size;
    file_size = bucket;
    std::cout << file_size;
    std::cout << sales;
    return 0;
}