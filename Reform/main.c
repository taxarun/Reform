//
//  main.c
//  Reform
//
//  Created by Robert Enderson on 10.11.16.
//  Copyright © 2016 Robert Enderson. All rights reserved.
//

#include <stdio.h>
#include "Reform.h"

//0000 1111
//1111 0000

//0101 0101
//1010 1010

int main(int argc, const char * argv[])
{
    uint8_t test[SIZE] = {240, 240, 15, 15};
    uint8_t output[SIZE];
    Reform(test, output);
    Reform_1(output, test);
    return 0;
}
