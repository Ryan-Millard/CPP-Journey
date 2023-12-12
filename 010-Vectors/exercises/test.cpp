#include <iostream>
#include <complex>

int main() {
    // Declare complex numbers
    std::complex<double> z1(3.0, 4.0); // 3 + 4i
    std::complex<double> z2(1.0, -2.0); // 1 - 2i

    // Print real and imaginary parts separately
    std::cout << "Real part of z1: " << z1.real() << std::endl;
    std::cout << "Imaginary part of z1: " << z1.imag() << std::endl;

    std::cout << "Real part of z2: " << z2.real() << std::endl;
    std::cout << "Imaginary part of z2: " << z2.imag() << std::endl;

    // Perform operations with complex numbers
    std::complex<double> sum = z1 + z2;
    std::complex<double> difference = z1 - z2;
    std::complex<double> product = z1 * z2;
    std::complex<double> quotient = z1 / z2;

    // Display results
    std::cout << "Sum: " << sum << " (Real: " << sum.real() << ", Imag: " << sum.imag() << ")" << std::endl;
    std::cout << "Difference: " << difference << " (Real: " << difference.real() << ", Imag: " << difference.imag() << ")" << std::endl;
    std::cout << "Product: " << product << " (Real: " << product.real() << ", Imag: " << product.imag() << ")" << std::endl;
    std::cout << "Quotient: " << quotient << " (Real: " << quotient.real() << ", Imag: " << quotient.imag() << ")" << std::endl;

    return 0;
}

