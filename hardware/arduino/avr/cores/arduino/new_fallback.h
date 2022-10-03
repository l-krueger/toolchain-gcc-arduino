
#pragma once

#include <stdlib.h>

#if __cpp_sized_deallocation

void operator delete(void* ptr, size_t);

void operator delete[]( void* ptr, size_t );

#endif
