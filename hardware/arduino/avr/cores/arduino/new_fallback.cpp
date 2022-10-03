
#include "new_fallback.h"

#if __cpp_sized_deallocation

void operator delete(void* ptr, size_t) {
    delete ptr;
}

void operator delete[]( void* ptr, size_t ) {
    delete[] ptr;
}

#endif
