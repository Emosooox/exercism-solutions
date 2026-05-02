#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index){
    return pow(2,index - 1);
}
uint64_t total(void){
    int i;
    uint64_t sum = 0;
    for(i = 0;i < 64;i++){
        sum += (uint64_t)pow(2,i);
    }
    return sum;

    
}