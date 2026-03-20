#include <stdio.h>
#include <stdarg.h>

int max_of(int args, ...){
    va_list ap;
    va_start(ap, args);

    int max = va_arg(ap, int);
    for(int i = 1; i < args; i++){
        int num = va_arg(ap, int);
        if(num > max) max = num;
    }

    va_end(ap);
    return max;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;
}