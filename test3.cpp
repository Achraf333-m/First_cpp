#include <iostream>

// int main() {
//     const double pi = 3.14;
//     // const here does not allow for pi to be assigned another value
//     return 0;
// }

// naming conventions:
// Snake Case -> file_size.
// Pascal case -> FileSize.
// Camel case -> fileSize.
// Hungarian Notation -> iFileSize --- not used as often

// mathematical expression 

// int main() {
//     int x = 10;
//     int y = 3;
//     int z = x % y;
//     z++;
//     std::cout << z;
//     return 0;
// }

int main() {
    int x = 5;
    // int y = x++;
    // if ++ is after x, x will  remain the same, y will be x + 1.

    int y = ++x;
    // if ++ is before x, x and y will be the same.

    std::cout << x << y;
    
}