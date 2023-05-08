#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    original_num = num;
    
    while(num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    
    if(original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }
    
    return 0;
}
//RESULT
Enter a string: racecar
racecar is a palindrome

Enter a string: hello
hello is not a palindrome
Footer
©️ 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
