#ifndef GCD_HPP
#define GCD_HPP


template<int A, int B>
struct gcd {
    static const int value = gcd<B, A % B>::value;
};

template<int A>
struct gcd<A, 0> {
    static const int value = A;
};

#endif