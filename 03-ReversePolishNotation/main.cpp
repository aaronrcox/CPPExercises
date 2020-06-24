#include <iostream>
#include <vector>
#include <string>


float RPN(const std::string equasion)
{
    // STEPS:
    // - explode the equasion by space ' ' and store in variable called 'tokens'
    // - loop through each token... if its a number push its integer value onto the 'stack'
    //      HINT: use std::stoi to convert string to an int
    //      HINT: create an std::vector<int> to represent the 'stack'
    // - if the token is a symbol ('+', '-', '/', '*') pop the last 2 values off the stack,
    //   do math on them ( one of the + - / * ), and push the result back onto the stack.
    //
    // - once you've iterated over all tokens, the final result of the equasion will be the first and only
    //   item left in the stack.
    //
    // NOTE: at the end, if the stack has more than 1 value, the equasion was not correctly formed.
    //       dont worry about error handeling for now...
    // 

    return 0;
}

int main(int argc, char** argv)
{
    {
        std::string equasion = "10 20 +";
        std::cout << equasion << " = " << RPN(equasion) << "\t\t\tExpected: 30" << std::endl;
    }
    {
        std::string equasion = "10 20 30 + *";
        std::cout << equasion << " = " << RPN(equasion) << "\t\t\tExpected: 500" << std::endl;
    }
    {
        std::string equasion = "20 10 / 4 *";
        std::cout << equasion << " = " << RPN(equasion) << "\t\t\tExpected: 8" << std::endl;
    }
    {
        std::string equasion = "20 10 - 15 +";
        std::cout << equasion << " = " << RPN(equasion) << "\t\t\tExpected: 35" << std::endl;
    }

    return 0;
}

