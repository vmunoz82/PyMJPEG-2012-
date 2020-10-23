#ifdef _MSC_VER
typedef __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
#else
#include <stdint.h>
#endif

void naive_idct_gen_table(void);

void naive_idct_2d(int32_t *src);

void idct_2d(int32_t *src);

void ycbcr2rgb(long *in, long *out);
