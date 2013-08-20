#include <stdio.h>

int strToInt (String s) {
    int i = 0; 
    int num = 0;
    boolean isNegative = false;
    char[] str = s.toCharArray();
	int len = str.length();
 
    if (str[0] == '-') {
        isNegative = true;
        i = 1;
    }
 
    while (i < len) {
        num *= 10;
        num += (str[i++] - '0');
    }
 
    if (isNegative) { 
        num *= -1; 
    }
 
    return num;
}