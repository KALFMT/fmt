/**
 * @file   RealNumber.hpp
 * @author Beren Oguz, Alptug Ulugol (kalfmt@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the implementation of RealNumber class. It also includes some additional function implementations.
 */
/*
Copyright (c) 2013, 2014 Beren Oguz and Alptug Ulugol
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
#include "larus/RealNumber.hpp"

namespace larus
{
    RealNumber::RealNumber()
    :value(0),dfn(0)
    {

    }

    RealNumber::RealNumber(const RealNumber& operand)
    :value(operand.value),dfn(operand.dfn)
    {

    }

    RealNumber::RealNumber(PrimitiveRealNumber operand)
    :value(operand)
    {
        dfn=true;
    }

    RealNumber::~RealNumber()
    {

    }

    Boolean RealNumber::is_defined() const
    {
        return this->dfn;
    }

    const RealNumber& RealNumber::operator = (const RealNumber& operand)
    {
        this->dfn = true; // Object gains a value here
        this->value = operand.value;
        return *this;
    }

    const RealNumber& RealNumber::operator += (const RealNumber& operand)
    {
        this->value += operand.value;
        return *this;
    }

    const RealNumber& RealNumber::operator -= (const RealNumber& operand)
    {
        this->value -= operand.value;
        return *this;
    }

    const RealNumber& RealNumber::operator *= (const RealNumber& operand)
    {
        this->value *= operand.value;
        return *this;
    }

    const RealNumber& RealNumber::operator /= (const RealNumber& operand)
    {
        this->value /= operand.value;
        return *this;
    }

    const RealNumber& RealNumber::operator %= (const RealNumber& operand)
    {
        this->value = (*this % operand).get_value();
        return *this;
    }

    PrimitiveRealNumber RealNumber::get_value() const
    {
        return this->value;
    }

    RealNumber RealNumber::operator + (const RealNumber& operand) const
    {
        return this->value + operand.value;
    }

    RealNumber RealNumber::operator - (const RealNumber& operand) const
    {
        return this->value - operand.value;
    }

    RealNumber RealNumber::operator * (const RealNumber& operand) const
    {
        return this->value * operand.value;
    }

    RealNumber RealNumber::operator / (const RealNumber& operand) const
    {
        return this->value / operand.value;
    }

    RealNumber RealNumber::operator % (const RealNumber& operand) const
    {
        return (PrimitiveInteger)this->value % (PrimitiveInteger)operand.value;
    }

    RealNumber RealNumber::operator ^ (const RealNumber& operand) const
    {
        return pow(this->value,operand.value);
    }

    RealNumber& RealNumber::operator ++ ()
    {
        this->value++;
        return *this;
    }

    RealNumber RealNumber::operator ++ (int)
    {
        return this->value++;
    }

    RealNumber& RealNumber::operator -- ()
    {
        this->value--;
        return *this;
    }

    RealNumber RealNumber::operator -- (int)
    {
        return this->value--;
    }

    Boolean RealNumber::operator == (const RealNumber& operand) const
    {
        return (this->value == operand.value);
    }

    Boolean RealNumber::operator != (const RealNumber& operand) const
    {
        return !(this->value == operand.value);
    }

    RealNumber RealNumber::sin () const
    {
        return std::sin(this->value);
    }

    RealNumber RealNumber::cos () const
    {
        return std::cos(this->value);
    }

    RealNumber RealNumber::tan () const
    {
        return std::tan(this->value);
    }

    RealNumber RealNumber::cot () const
    {
        return this->tan()^(-1);
    }

    RealNumber RealNumber::sec () const
    {
        return this->cos()^(-1);
    }

    RealNumber RealNumber::csc () const
    {
        return this->sin()^(-1);
    }

    RealNumber RealNumber::arcsin () const
    {
        return std::asin(this->value);
    }

    RealNumber RealNumber::arccos () const
    {
        return std::acos(this->value);
    }

    RealNumber RealNumber::arctan () const
    {
        return std::atan(this->value);
    }

    RealNumber RealNumber::arccot () const
    {
        return (*this^-1).arctan();
    }

    RealNumber RealNumber::arcsec () const
    {
        return (*this^-1).arccos();
    }

    RealNumber RealNumber::arccsc () const
    {
        return (*this^-1).arcsin();
    }

    RealNumber RealNumber::to_degree () const
    {
        return this->value/M_PI*180.0;
    }

    RealNumber RealNumber::to_radian () const
    {
        return this->value*M_PI/180.0;
    }

    RealNumber RealNumber::log() const
    {
        return log10l(this->value);
    }

    RealNumber RealNumber::log(const RealNumber& base) const
    {
        return std::log10(this->value) / std::log10(base.value);
    }

    RealNumber RealNumber::ln() const
    {
        return std::log(this->value);
    }

    RealNumber RealNumber::abs () const
    {
        return std::abs(this->value);
    }

    RealNumber RealNumber::sqrt () const
    {
        return std::pow(this->value,0.5);
    }

    RealNumber RealNumber::cbrt () const
    {
        return std::cbrt(this->value);
    }
}

std::ostream& operator << (std::ostream& stream,const larus::RealNumber& number)
{
    stream << (number.get_value());
    return stream;
}
