#include <iostream>

int main()
{
    char gender = 'F';
    bool isEmployed = true;
    unsigned short numOfSons = 2;
    short yearOfAppt = 2009;
    unsigned int YearlyPackage = 1500000;
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawn = 12047235;
    long long balance = 995324987;

    std::cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
    std::cout << "--------------------------------------------------------------------\n";
    std::cout << " The Gender is : " << gender << "\n";
    std::cout << " Is she married? : " << isEmployed << "\n";
    std::cout << " Number of sons she has : " << numOfSons << "\n";
    std::cout << " Year of her appointment : " << yearOfAppt << "\n";
    std::cout << " Salary for a year : " << YearlyPackage << "\n";
    std::cout << " Height is : " << height << "\n";
    std::cout << " GPA is " << gpa << "\n";
    std::cout << " Salary drawn upto : " << totalDrawn << "\n";
    std::cout << " Balance till : " << balance << "\n\n";

    return 0;
}