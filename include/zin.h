#ifndef __zin__
#define __zin__

#include <stdint.h>

typedef zin_cpu_t {
    // Accumulator and flag registers
    uint8_t a; uint8_t f;
    uint8_t a_alt; uint8_t f_alt;

    // General purpose registers (and 16-bit pairs)
    uint8_t b; uint8_t c; 
    uint8_t d; uint8_t e; 
    uint8_t h; uint8_t l;
    uint8_t b_alt; uint8_t c_alt; 
    uint8_t d_alt; uint8_t e_alt; 
    uint8_t h_alt; uint8_t l_alt;

    uint16_t ix; uint16_t iy; // Index registers
    uint8_t i; uint8_t r; // Interrupt and memory refresh registers
    uint16_t sp; uint16_t pc; // Stack pointer and program counter
    
    // Interrupt flip-flops
    bool iff1; bool iff2; 
};

#endif // __zin__