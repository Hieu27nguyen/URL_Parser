
#include <string>
#include <iostream>

int main()
{
    std::cout << "Please enter a URL: ";
    std::string URL;
    std::cin >> URL;

    std::string scheme = URL.substr(0, 6);
    std::string newString = URL.substr(8);
    std::string::size_type position =newString.find("/");
    std::string author = URL.substr(6, (position+2));
    std::string path = URL.substr((position+8));
    std::cout << "scheme = "<<scheme<<"\n";
    std::cout << "authority = "<<author << "\n";
    std::cout << "path = "<<path << "\n";
}
