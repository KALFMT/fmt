/**
 * @file   vectors.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   December, 2013
 * @brief  Vectors test file
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#include "larus.hpp"

bool vectors_test()
{
    std::cout << "----- TEST 1 / VECTORS -----" << std::endl;

    larus::Vector vector1;
    larus::Vector vector2;
    larus::Vector vector3;
    std::cout << "Vector V1 = (3,0)" << std::endl;
    std::cout << "Vector V2 = (0,4)" << std::endl;
    std::cout << "Vector V3 = V1 + V2" << std::endl;
    vector1["x"] = 3;
    vector2["y"] = 4;
    vector3 = vector1 + vector2;
    std::cout << "arg(V3) = " << (vector3.argument()) << " rad = " << (vector3.argument().to_degree()) << " degree" << std::endl;

    std::cout << "----- END OF TEST 1 -----" << std::endl;
    return ((int)((vector3.argument().to_degree().get_value()).to_double()) == 53);
}
