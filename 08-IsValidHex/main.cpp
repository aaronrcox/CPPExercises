
#include <iostream>
#include <string>

bool isValidHexCode(const char hex[]) {
    
    // test for length
    if (strlen(hex) > 7)
        return false;

    // test for no #
    if (hex[0] != '#')
        return false;

    for (int i = 1; i < 8; i++)
    {
        // test for on hex scale 
        if ((hex[0] >= 'a' && hex[0] <= 'f') ||
            (hex[0] >= 'A' && hex[0] <= 'F') )
            return false;

            // test for non all upper case
            if (i >= 2 && hex[i] != '\0')
            {
                if (!isdigit(hex[i]) && isupper(hex[1]))
                {
                    if (!isupper(hex[i]))
                        return false;
                }
                else
                    if (!isdigit(hex[i]) && isupper(hex[i]))
                        return false;
            }
    }
    return true;
}

int main(int argc, char** argv)
{
    std::cout << isValidHexCode("#CD5C5C") << std::endl; // true
    std::cout << isValidHexCode("#EAECEE") << std::endl; // true
    std::cout << isValidHexCode("#eaecee") << std::endl; // true
    
    std::cout << isValidHexCode("#CD5C58C") << std::endl; // false
    // Length exceeds 6

    std::cout << isValidHexCode("#CD5C5Z") << std::endl; // false
    // Not all alphabetic characters in A-F

    std::cout << isValidHexCode("#CD5C&C") << std::endl; // false
    // Contains unacceptable character
    
    std::cout << isValidHexCode("CD5C5C") << std::endl; // false
    // Missing #
    
    std::cout << isValidHexCode("#cd5C5D") << std::endl; // false
    // all aplphabetic characters must match in case
}
