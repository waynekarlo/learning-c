#include <stdio.h>

void string_copy(char destination[], char source[]){
    //write your code here
    int i = 0;
   
    while (source[i] != '\0') {
        destination[i] = source[i]; 
        i++;
    }
    destination[i] = '\0';
    printf("%s\n", destination);
}

int main(void){
    // write test cases here!
    char str1[7], str2[7];
    str1[0] = 'h';
    str1[1] = 'e';
    str1[2] = 'l';
    str1[3] = 'l';
    str1[4] = 'o';
    str1[5] = '\0';

    printf("%s\n", str1);
    printf("%s\n", str2);

    string_copy(str2,str1);
    return 0;
}
