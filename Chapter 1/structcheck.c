#include <stdio.h>

int mystery(int val) {
    if (val < 10) {
         return val;
    } else {
      return (val % 10) + mystery(val / 10); 
    }
}

int main(void){
    int i;
    i = mystery(123);

    printf("%d\n", i);

}