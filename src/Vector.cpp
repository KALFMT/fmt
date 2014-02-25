/*
Copyright (c) 2013, 2014, Beren Oguz and Alptug Ulugol
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of KAL IEEE nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL BEREN OGUZ OR ALPTUG ULUGOL BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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

    RealNumber& Vector::operator [] (const String& at)
    {
        return this->dims[at];
    }

    RealNumber Vector::operator [] (const String& at) const
    {
        RealNumber final(this->dims.find(at)->second);
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

    RealNumber Vector::magnitude() const
    {
        return (((this->operator[]("x")^2)+(this->operator[]("y")^2)+(this->operator[]("z")^2))^0.5);
    }

    RealNumber Vector::argument() const
    {
        return (this->operator[]("y")/this->operator[]("x")).arctan();
    }

    RealNumber Vector::azimuthal() const
    {
        return (this->operator[]("y")/this->operator[]("z")).arctan();
    }
}
