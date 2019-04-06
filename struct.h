//
// Created by Aisling Liu on 2019-03-31.
//
#include <stdio.h>
#include <string.h>

#ifndef ECE243_FINALPROJECT_STRUCT_H
#define ECE243_FINALPROJECT_STRUCT_H

typedef struct instructions{
    char instruction[100];
    //corresponding response to the instructions
    int answer; // 0 = left, 1 = right, 2 = up, 3 = down.
}INST;

#endif //ECE243_FINALPROJECT_STRUCT_H
