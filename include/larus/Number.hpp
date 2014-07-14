/**
 * @author Alptuğ Ulugöl, Beren Oğuz
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */
#ifndef LARUS_NUMBER
#define LARUS_NUMBER

#include "defines.h"
#include "tostring.h"
#include <iostream>
#include "ginac/ginac.h"

namespace larus
{
    class Number
    {
        private:
            PrimitiveNumber value;
            Boolean dfn;

        public:
            Number();
            Number(const int& operand);
        Number(const double& operand);
        Number(const float& operand);
            Number(const Number& operand);
            Number(PrimitiveNumber operand);
            ~Number();

            Boolean is_defined() const;

            const Number& operator = (const Number& operand);
            const Number& operator = (const double operand);
            const Number& operator = (const int& operand);
            const Number& operator = (const char* operand);
            const Number& operator += (const Number& operand);
            const Number& operator -= (const Number& operand);
            const Number& operator *= (const Number& operand);
            const Number& operator /= (const Number& operand);
            const Number& operator %= (const Number& operand);

            Boolean operator == (const Number& operand) const;
            Boolean operator != (const Number& operand) const;
            PrimitiveNumber get_value() const;

            Number& operator ++ ();
            Number operator ++ (int);
            Number& operator -- ();
            Number operator -- (int);

            Number operator + (const Number& operand) const;
            Number operator - (const Number& operand) const;
            Number operator * (const Number& operand) const;
            Number operator / (const Number& operand) const;
            Number operator % (const Number& operand) const;
            Number operator ^ (const Number& operand) const;

            Number sin () const;
            Number cos () const;
            Number tan () const;
            Number cot () const;
            Number sec () const;
            Number csc () const;
            Number arcsin () const;
            Number arccos () const;
            Number arctan () const;
            Number arccot () const;
            Number arcsec () const;
            Number arccsc () const;

            Number to_degree() const;
            Number to_radian() const;

            Number log () const;
            Number log (const Number& base) const;
            Number ln () const;

            Number inverse() const;

            Number abs () const;
            Number sqrt () const;
            Number cbrt () const;
            Number root(const Number& rt) const;
    };
}

std::ostream& operator << (std::ostream& stream,const larus::Number& number);

#endif //LARUS_REAL_NUMBER
