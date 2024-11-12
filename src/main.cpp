#include <iostream>
#include "gcd.hpp"
#include "is_prime.hpp"
#include "factorial.hpp"
#include "fibonacci.hpp"
#include "power_of_two.hpp"
#include "is_power_of_two.hpp"

int main() {
    std::cout << "Factorial of 5: " << factorial<5>::value << std::endl;
    std::cout << "Factorial of 10: " << factorial<10>::value << std::endl;
    std::cout << std::endl;

    std::cout << "Fibonacci of 10: " << fibonacci<10>::value << std::endl;
    std::cout << "Fibonacci of 20: " << fibonacci<20>::value << std::endl;
    std::cout << std::endl;

    std::cout << "2^5: " << power_of_two<5>::value << std::endl;
    std::cout << "2^10: " << power_of_two<10>::value << std::endl;
    std::cout << std::endl;

    std::cout << "Is 1 a power of two? " << (is_power_of_two<1>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 2 a power of two? " << (is_power_of_two<2>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 3 a power of two? " << (is_power_of_two<3>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 4 a power of two? " << (is_power_of_two<4>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 5 a power of two? " << (is_power_of_two<5>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 8 a power of two? " << (is_power_of_two<8>::value ? "Yes" : "No") << std::endl;
    std::cout << std::endl;



    std::cout << "Is 0 a prime number? " << (is_prime<0>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 1 a prime number? " << (is_prime<1>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 2 a prime number? " << (is_prime<2>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 3 a prime number? " << (is_prime<3>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 4 a prime number? " << (is_prime<4>::value ? "Yes" : "No") << std::endl;
    std::cout << "Is 5 a prime number? " << (is_prime<5>::value ? "Yes" : "No") << std::endl;
    std::cout << std::endl;

    std::cout << "GCD of 56 and 98: " << gcd<56, 98>::value << std::endl;
    std::cout << "GCD of 48 and 18: " << gcd<48, 18>::value << std::endl;
    std::cout << "GCD of 101 and 103: " << gcd<101, 103>::value << std::endl;

    return 0;
}