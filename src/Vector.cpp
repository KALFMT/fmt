/**
 * @file   Vector.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   January, 2014
 * @brief  This file includes the implementation of Vector Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#include "larus/Vector.hpp"

namespace larus
{
    Vector::Vector()
    {
        this->dims["x"] = 0;
        this->dims["y"] = 0;
        this->dims["z"] = 0;
    }

    Vector::~Vector()
    {

    }

    Number& Vector::operator [] (const String& at)
    {
        return this->dims[at];
    }

    Number Vector::operator [] (const String& at) const
    {
        Number final(this->dims.find(at)->second);
        return final;
    }

    Vector Vector::operator + (const Vector& other) const
    {
        Vector final;
        final["x"] = (this->operator[]("x") + other["x"]);
        final["y"] = (this->operator[]("y") + other["y"]);
        final["z"] = (this->operator[]("z") + other["z"]);
        return final;
    }

    Vector Vector::operator - (const Vector& other) const
    {
        Vector final;
        final["x"] = this->operator[]("x") - other["x"];
        final["y"] = this->operator[]("y") - other["y"];
        final["z"] = this->operator[]("z") - other["z"];
        return final;
    }

    Number Vector::magnitude() const
    {
        return (((this->operator[]("x")^2)+(this->operator[]("y")^2)+(this->operator[]("z")^2))^0.5);
    }

    Number Vector::argument() const
    {
        return (this->operator[]("y")/this->operator[]("x")).arctan();
    }

    Number Vector::azimuthal() const
    {
        return (this->operator[]("y")/this->operator[]("z")).arctan();
    }
}
