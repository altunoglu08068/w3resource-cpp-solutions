#include <iostream>
#include <iomanip>

int main()
{
    int m1 = 5, m2 = 7;
    double d1 = 3.7, d2 = 8.0;

    std::cout << "Display arithmetic operations with mixed data type :\n";
    std::cout << "---------------------------------------------------------\n";

    // Tam sayılar saf int olarak bastım.
    std::cout << m1 << " + " << m2 << " = " << m1 + m2 << "\n";

    // Ondalıklı sayılar için virgülden sonra sabit 1 basamak ayarını yaptım.
    std::cout << std::fixed << std::setprecision(1);
    std::cout << d1 << " + " << d2 << " = " << d1 + d2 << "\n";
    std::cout << m1 << " + " << d2 << " = " << m1 + d2 << "\n";

    // Tam sayılar için manipülatör etkisizdir (5 - 7 yine -2 çıkar.)
    std::cout << m1 << " - " << m2 << " = " << m1 - m2 << "\n";
    std::cout << d1 << " - " << d2 << " = " << d1 - d2 << "\n";
    std::cout << m1 << " - " << d2 << " = " << m1 - d2 << "\n";

    std::cout << m1 << " * " << m2 << " = " << m1 * m2 << "\n";
    std::cout << d1 << " * " << d2 << " = " << d1 * d2 << "\n";
    std::cout << m1 << " * " << d2 << " = " << m1 * d2 << "\n";

    std::cout << m1 << " / " << m2 << " = " << m1 / m2 << "\n";
    std::cout << d1 << " / " << d2 << " = " << d1 / d2 << "\n";
    std::cout << m1 << " / " << d2 << " = " << m1 / d2 << "\n\n";

    return 0;
}