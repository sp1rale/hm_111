#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {}

    Fraction operator+(const Fraction& other) const {
        Fraction result;
        result.numerator = (numerator * other.denominator) + (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction operator-(const Fraction& other) const {
        Fraction result;
        result.numerator = (numerator * other.denominator) - (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction operator*(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

   
    Fraction operator/(const Fraction& other) const {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    
    void display() const {
        std::cout << numerator << "/" << denominator;
    }
};

int main() {
    
    Fraction fraction1(1, 2);
    Fraction fraction2(3, 4);

    Fraction sum = fraction1 + fraction2;
    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    Fraction difference = fraction1 - fraction2;
    std::cout << "Difference: ";
    difference.display();
    std::cout << std::endl;

    Fraction product = fraction1 * fraction2;
    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    Fraction quotient = fraction1 / fraction2;
    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}
