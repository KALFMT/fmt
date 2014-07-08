#include <iostream>
#include "larus.hpp"
#include <utility>
#include <vector>
#include <string>
#include <stdexcept>
#include <ginac/ginac.h>

bool vectors_test();
bool kinematics_1_test();
std::pair<larus::Boolean, std::vector<larus::String>> RealNumber_test();

int main()
{

    bool vectors = vectors_test();
    bool kinematics_1 = kinematics_1_test();


    std::cout << std::endl;

    std::cout << "Test 1 (Vectors): ";
    if(vectors)
    {
        std::cout << "SUCCESS" << std::endl;
    }
    else
    {
        std::cerr << "FAILED" << std::endl;
        return 1;
    }

    std::cout << "Test 2 (Kinematics 1): ";
    if(kinematics_1)
    {
        std::cout << "SUCCESS" << std::endl;
    }
    else
    {
        std::cerr << "FAILED" << std::endl;
        return 1;
    }

    std::cout << "Test 3 (RealNumbers): ";

    std::pair<larus::Boolean, std::vector<larus::String>> test = RealNumber_test();

    if(test.first)
    {
        std::cout << "SUCCESS" << std::endl;
    }
    else
    {
        std::cout << "FAILED" << std::endl;
        std::cout << "RealNumbers Test Result:" << std::endl;

        for (std::vector<larus::String>::const_iterator it = test.second.begin(); it != test.second.end(); it++)
        {
            std::cout<< *it << std::endl;
        }

        return 1;
    }


}
