#include <stdio.h>
#include <stdlib.h>

struct modify{
    int num[2];
    char symbol;
};

void print_info(void);
struct modify scan_modify(void);
void plus(int num[2]);
void minus(int num[2]);
void multiply(int num[2]);
void division(int num[2]);