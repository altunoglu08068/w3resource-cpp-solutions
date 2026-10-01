#include <iostream>
#include <iomanip>

int main()
{
    int m1 = 5, m2 = 7;
    double d1 = 3.7, d2 = 8.0;

    std::cout << "\n\n Display arithmetic operations with mixed data type :\n";
    std::cout << "---------------------------------------------------------\n";

    // Toplama
    std::cout << m1 << " + " << m2 << " = " << m1 + m2 << "\n";
    std::cout << d1 << " + " << d2 << " = " << d1 + d2 << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << m1 << " + " << d2 << " = " << m1 + d2 << "\n";

    // Çıkarma
    std::cout << std::defaultfloat;
    std::cout << m1 << " - " << m2 << " = " << m1 - m2 << "\n";
    std::cout << d1 << " - " << d2 << " = " << d1 - d2 << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << m1 << " - " << d2 << " = " << m1 - d2 << "\n";

    // Çarpma
    std::cout << std::defaultfloat;
    std::cout << m1 << " * " << m2 << " = " << m1 * m2 << "\n";
    std::cout << d1 << " * " << d2 << " = " << d1 * d2 << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << m1 << " * " << d2 << " = " << m1 * d2 << "\n";

    // Bölme
    std::cout << std::defaultfloat;
    std::cout << m1 << " / " << m2 << " = " << m1 / m2 << "\n";
    std::cout << std::fixed << std::setprecision(1);
    std::cout << d1 << " / " << d2 << " = " << d1 / d2 << "\n";
    std::cout << m1 << " / " << d2 << " = " << m1 / d2 << "\n\n";

    return 0;
}