#include <iostream>


template <typename Iterator1, typename Iterator2, typename Iterator3>
auto merge( Iterator1 first1, Iterator1 last1, Iterator1 first2, Iterator1 last2, Iterator2 output ) -> Iterator2
{
    for (; first1 != last1; ++output) {
        if (first2 == last2) {
            return std::copy(first1, last1, output);
        }
        if (*first2 < *first1) {
            *output = *first2;
            ++first2;
        } else {
            *output = *first1;
            ++first1;
        }
    }
    return std::copy(first2, last2, output);
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}