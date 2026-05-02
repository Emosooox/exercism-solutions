#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    int i,sum = 0;
    for(i = number - 1;i >= 0;i--)
    {
        sum += (number - i)*(number - i);
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    int i,sum = 0;
    for(i = number - 1;i >= 0;i--)
    {
        sum += (number - i);
    }
    return sum*sum;
}

unsigned int difference_of_squares(unsigned int number){


    return square_of_sum(number) - sum_of_squares(number);
}