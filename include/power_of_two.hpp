#ifndef POWER_OF_TWO_HPP
#define POWER_OF_TWO_HPP

template <int N>
struct power_of_two {
    static const int value = 2 * power_of_two<N - 1>::value;
};

template <>
struct power_of_two<0> {
    static const int value = 1;
};

#endif