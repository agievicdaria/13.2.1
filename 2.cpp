#include <iostream>
#include <cmath>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

#define PRINT_RESULT(name, result) std::cout << name << " = " << result << std::endl;

int main() {
    double x, y;
    double z = 7;
    std::cout << "Введіть значення x, y: ";
    std::cin >> x >> y;

    double w;

    #if 0 < z && z < 5
        w = MAX(x*x + y + z, x*y*z);
        std::cout << "1";
    #elif z <= 0 || z >= 5
        w = MIN(x*x + (y+z)*(y+z), x*y);
        std::cout << "2";
    #endif

    PRINT_RESULT("w", w);

    return 0;
}
