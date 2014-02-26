#include <iostream>

bool vectors_test();
bool kinematics_1_test();

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
}
