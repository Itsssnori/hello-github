#include <iostream>
#include <cctype>

int sumNumber (int n);
int revNumber (int n);
bool checkPalindrome (int n);

int main () {
    int number;
    char choice;

    do {
        int totalNum, revNum;
        [[maybe_unused]] bool result;

         std::cout << "\nEnter given number: ";
         std::cin >> number;

        totalNum = sumNumber (number);
        revNum = revNumber (number);

        result = checkPalindrome(number); {
            if (result) {
                std::cout << "Palindrome";
            }
            else {
                std::cout << "Not a Palindrome";
            }
         }

         std::cout << "\nOriginal number: " << number;
         std::cout << "\nSum number: " << totalNum;
         std::cout << "\nReverse number: " << revNum;
         std::cout << "\nResult: " << (result ? "Palindrome" : "Not a Palindrome");
       

        std::cout << "\nDo you want to repeat process(Y/N)? ";
        std::cin >> choice;

    } while (toupper (choice) == 'Y');
   
    return 0;
}

int sumNumber (int n) {
    int sum {0};
        while (n > 0) {
            sum += n % 10;
            n /= 10; 
        }
    return sum;
}

int revNumber (int n) {
    int rev {0};
        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }
    return rev;
}

bool checkPalindrome (int n) {
       return n == revNumber (n);
}
