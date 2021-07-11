#include "test2.h"

void main(void)
{
    struct modify md;
    while(1)
    {
        print_info();
        md = scan_modify(); 
        switch(md.symbol)
        {
            case '+':
                plus(md.num);
                break;
            case '-':
                minus(md.num);
                break;
            case '*':
                multiply(md.num);
                break;
            case '/':
                division(md.num);
                break;
            case 'n':
                exit(1);
                break;
        }
    }
}