#include "check.hpp"
#include  <iostream>
#include <sstream>

int check_input()
{
    bool fl=false;
    int result = 0;
    std::string s("");
    do{
        std::cout << "Input the number ... " << std::endl;
        getline(std::cin, s);
        fl = false;
        if (s[0] == '-') {
            for (int i = 1; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Error number ... " << s[i] << std::endl;
                    fl=true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Error number ... " << s[i] << std::endl;
                    fl=true;
                    break;
                }
            }
        }
    } while(fl);
    std::stringstream str_int(s);
    str_int >> result;
    return result;
}


