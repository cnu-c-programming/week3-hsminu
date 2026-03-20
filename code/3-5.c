#include <stdio.h>
#include <stdarg.h>

void my_sum(char c, int args, ...){
    va_list ap;
    va_start(ap, args);

    if(c == 'S') {
        for(int i=0; i<args - 1; i++){ 
            printf("%s ", va_arg(ap, char*));
        }
        printf("%s\n", va_arg(ap, char*));
    }
    else if(c == 'C'){
        for(int i=0; i<args; i++){ 
            printf("%c", va_arg(ap, int));
        }
        printf("\n");
    }
    else if(c == 'D'){
        int sum = 0;
        for(int i=0; i<args; i++){ 
            sum += va_arg(ap, int);
        }
        printf("%d\n", sum);
    }
    
    va_end(ap);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}