#ifndef FIBB_HPP
#define FIBB_HPP

template <int N>
struct fibonacci {
    static constexpr int value = fibonacci<N-1>::value + fibonacci<N-2>::value;
};

template <>
struct fibonacci<0> {
    static constexpr int value = 0;
};

template<>
struct fibonacci<1> {
    static constexpr int value = 1;
};

#endif