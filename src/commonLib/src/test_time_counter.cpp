//
// Created by chenjj on 2022/1/14.
//


#include "time_counter.h"
#include <unistd.h>

int main(int argc, char** argv)
{
    common::time_counter timeCounter("123");
    clock_t tim = timeCounter.start();
    printf("%ld\n", tim);
    for(int i = 0; i < 100000; ++i)
    {

    }
    tim = timeCounter.stop();
    timeCounter.getDuration();
    printf("%ld\n", tim);
}