#include "isPal.hpp"

void palcheck(std::string p)
{
    std::cout << "String: " << p << std::endl;
    if( isPalIterative(p.c_str(), p.length()) )
        std::cout << "Iterative version: is a palindrome.\n";
    else
        std::cout << "Iterative version: is not a palindrome.\n";

    if( isPalRecursive(p.c_str(), 0, p.length()) )
        std::cout << "Recursive version: is a palindrome.\n";
    else
        std::cout << "Recursive version: is not a palindrome.\n";

    std::cout << std::endl;
}

int main() {
    // "A man, a plan, a canal -- Panama"
   palcheck("amanaplanacanalpanama");

   // More palindromes
   palcheck("anna");
   palcheck("racecar");

   // Not palindromes
   palcheck("anza");
   palcheck("racebar");
   palcheck("this is in no way a palindrome");
   return 0;
}
