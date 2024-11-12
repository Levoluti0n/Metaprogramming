#ifndef IS_POWER_OF_TWO_HPP
#define IS_POWER_OF_TWO_HPP

template <int N>
struct is_power_of_two {
    static const bool value = (N > 0) && ((N & (N - 1)) == 0);
};

#endif