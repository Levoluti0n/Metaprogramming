#ifndef IS_PRIME_HPP
#define IS_PRIME_HPP

template <int N, int D = 2>
struct is_prime {
    static const bool value = (N % D != 0) && is_prime<N, D + 1>::value;
};

template <int N>
struct is_prime<N, N> {
    static const bool value = true;
};

template <>
struct is_prime<0> {
    static const bool value = false;
};

template <>
struct is_prime<1> {
    static const bool value = false;
};

#endif