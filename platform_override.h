#pragma once
#if __has_include("grbl/platform.h")
# include "grbl/platform.h"
#endif
#undef UINT32FMT
#undef UINT32SFMT
#define UINT32FMT "%lu"
#define UINT32SFMT "lu"
