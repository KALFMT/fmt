/**
 * @file   Number.hpp
 * @author Beren Oguz, Alptug Ulugol (kalfmt@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the implementation of Number class. It also includes some additional function implementations.
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
#include "larus/Number.hpp"

#include <sstream>


namespace larus
{
    Number::Number()
    :value(0),dfn(0)
    {

    }

    Number::Number(const Number& operand)
    :value(operand.value),dfn(operand.dfn)
    {

    }
    
    Number::Number(const int& operand)
    :value(operand),dfn(true)
    {
        
    }
    
    Number::Number(const double& operand)
    :value(operand),dfn(true)
    {
        
    }
    
    Number::Number(const float& operand)
    :value(operand),dfn(true)
    {
        
    }

    Number::Number(PrimitiveNumber operand)
    :value(operand)
    {
        dfn=true;
    }

    Number::~Number()
    {

    }

    Boolean Number::is_defined() const
    {
        return this->dfn;
    }

    const Number& Number::operator = (const Number& operand)
    {
        this->dfn = true; // Object gains a value here
        this->value = operand.value;
        return *this;
    }
    
    const Number& Number::operator = (const double operand)
    {
        this->dfn = true; // Object gains a value here
        PrimitiveNumber other(operand);
        this->value = other;
        return *this;
    }
    
    const Number& Number::operator = (const int& operand)
    {
        this->dfn = true; // Object gains a value here
        PrimitiveNumber other = operand;
        this->value = other;
        return *this;
    }
    
    const Number& Number::operator = (const char* operand)
    {
        this->dfn = true; // Object gains a value here
        PrimitiveNumber other = operand;
        this->value = other;
        return *this;
    }

    const Number& Number::operator += (const Number& operand)
    {
        this->value += operand.value;
        return *this;
    }

    const Number& Number::operator -= (const Number& operand)
    {
        this->value -= operand.value;
        return *this;
    }

    const Number& Number::operator *= (const Number& operand)
    {
        this->value *= operand.value;
        return *this;
    }

    const Number& Number::operator /= (const Number& operand)
    {
        this->value /= operand.value;
        return *this;
    }

    const Number& Number::operator %= (const Number& operand)
    {
        this->value = (*this % operand).get_value();
        return *this;
    }

    PrimitiveNumber Number::get_value() const
    {
        return this->value;
    }

    Number Number::operator + (const Number& operand) const
    {
        return this->value + operand.value;
    }

    Number Number::operator - (const Number& operand) const
    {
        return this->value - operand.value;
    }

    Number Number::operator * (const Number& operand) const
    {
        return this->value * operand.value;
    }
    
    Number Number::operator / (const Number& operand) const
    {
        return this->value / operand.value;
    }
    
    Number Number::operator % (const Number& operand) const
    {
        return GiNaC::mod(this->value, operand.value);
        
    }
    
    Number Number::operator ^ (const Number& operand) const
    {
        return GiNaC::pow(this->value,operand.value);
    }

    Number& Number::operator ++ ()
    {
        this->value++;
        return *this;
    }

    Number Number::operator ++ (int)
    {
        return this->value++;
    }

    Number& Number::operator -- ()
    {
        this->value--;
        return *this;
    }

    Number Number::operator -- (int)
    {
        return this->value--;
    }

    Boolean Number::operator == (const Number& operand) const
    {
        return (this->value == operand.value);
    }

    Boolean Number::operator != (const Number& operand) const
    {
        return !(this->value == operand.value);
    }

    Number Number::sin () const
    {
        return GiNaC::sin(this->value);
    }

    Number Number::cos () const
    {
        return GiNaC::cos(this->value);
    }

    Number Number::tan () const
    {
        return GiNaC::tan(this->value);
    }

    Number Number::cot () const
    {
        return GiNaC::inverse(GiNaC::tan(this->value));
    }

    Number Number::sec () const
    {
        return GiNaC::inverse(GiNaC::cos(this->value));
    }

    Number Number::csc () const
    {
        return GiNaC::inverse(GiNaC::sin(this->value));
    }

    Number Number::arcsin () const
    {
        return GiNaC::asin(this->value);
    }

    Number Number::arccos () const
    {
        return GiNaC::acos(this->value);
    }

    Number Number::arctan () const
    {
        return GiNaC::atan(this->value);
    }

    Number Number::arccot () const
    {
        return (*this^(PrimitiveNumber)-1).arctan();
    }

    Number Number::arcsec () const
    {
        return (*this^(PrimitiveNumber)-1).arccos();
    }

    Number Number::arccsc () const
    {
        return (*this^(PrimitiveNumber)-1).arcsin();
    }

    Number Number::to_degree () const
    {
        return this->value / LARUS_PI * (PrimitiveNumber)180;
    }

    Number Number::to_radian () const
    {
        return this->value * LARUS_PI / (PrimitiveNumber)180;
    }
    
    Number Number::log() const
    {
        return GiNaC::log(this->value) / GiNaC::log((PrimitiveNumber)10);
    }
    
    Number Number::log(const Number& base) const
    {
        return GiNaC::log(this->value) / GiNaC::log(base.value);
    }
    
    Number Number::ln() const
    {
        return GiNaC::log(this->value);
    }
    
    Number Number::abs () const
    {
        return GiNaC::abs(this->value);
    }
    
    Number Number::sqrt () const
    {
        return GiNaC::sqrt(this->value);
    }
    
    
    
    Number Number::cbrt () const
    {
        //std::cbrt(this->value);
        return *this ^ GiNaC::inverse(GiNaC::numeric(3));
    }
    
    Number Number::inverse() const
    {
        return GiNaC::inverse(this->value);
    }
    
    Number Number::root(const Number& rt) const
    {
        return *this ^ rt.inverse();
    }
}

std::ostream& operator << (std::ostream& stream,const larus::Number& number)
{
    stream << GiNaC::ToString(number.get_value());
    
    return stream;
}
