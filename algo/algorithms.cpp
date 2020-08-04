#include "algorithms.h"
//using namespace std;

namespace algo{
    template<typename T>
    void xorswap(T &__a,T &__b) { (__a == __b) ? __a : __a^=__b^=__a^=__b; }
}