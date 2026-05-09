#pragma once

struct SimpleStruct {
    int a;
};

struct ExpandedStruct {
    int a;
    double b;
    char c;
};

struct PointerStruct {
    int* pInt;
    double* pDouble;
    SimpleStruct* pStruct;
};