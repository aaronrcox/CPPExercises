#include <iostream>
#include <string>


bool isIsogram(const std::string& word)
{
    // TODO: write your code here
    // return true only if all characters in the word are unique, (ignore case) otherwise return false.
    return true;
}


int main(int argc, char** argv)
{
    std::cout << "Aardvark" << "\t" << isIsogram("Aardvark") << std::endl;
    std::cout << "Bake" << "\t" << isIsogram("Bake") << std::endl;
    std::cout << "Lay" << "\t" << isIsogram("Lay") << std::endl;
    std::cout << "Issue" << "\t" << isIsogram("Issue") << std::endl;
    std::cout << "Wood" << "\t" << isIsogram("Wood") << std::endl;
    std::cout << "Swop" << "\t" << isIsogram("Swop") << std::endl;
    std::cout << "Coup" << "\t" << isIsogram("Coup") << std::endl;
    std::cout << "Trouser" << "\t" << isIsogram("Trouser") << std::endl;
    std::cout << "Superior" << "\t" << isIsogram("Superior") << std::endl;
    std::cout << "History" << "\t" << isIsogram("History") << std::endl;
    std::cout << "Disclose" << "\t" << isIsogram("Disclose") << std::endl;

    return 0;
}