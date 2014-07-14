/**
 * @file   Number.hpp
 * @author Beren Oguz, Alptug Ulugol (kalfmt@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the implementation of Number class. It also includes some additional function implementations.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
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
