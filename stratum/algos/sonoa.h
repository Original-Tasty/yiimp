#ifndef SONOA_H
#define SONOA_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void sonoa_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif
