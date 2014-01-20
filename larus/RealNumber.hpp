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
#ifndef LARUS_REAL_NUMBER
#define LARUS_REAL_NUMBER

#include "defines.h"
#include <iostream>

namespace larus
{
    class RealNumber
    {
        private:
            PrimitiveRealNumber value;
            Boolean dfn;

        public:
            RealNumber();
            RealNumber(const RealNumber& operand);
            RealNumber(PrimitiveRealNumber operand);
            ~RealNumber();

            Boolean is_defined() const;

            const RealNumber& operator = (const RealNumber& operand);
            const RealNumber& operator += (const RealNumber& operand);
            const RealNumber& operator -= (const RealNumber& operand);
            const RealNumber& operator *= (const RealNumber& operand);
            const RealNumber& operator /= (const RealNumber& operand);
            const RealNumber& operator %= (const RealNumber& operand);

            Boolean operator == (const RealNumber& operand) const;
            Boolean operator != (const RealNumber& operand) const;

            PrimitiveRealNumber operator * () const;

            RealNumber& operator ++ ();
            RealNumber operator ++ (int);
            RealNumber& operator -- ();
            RealNumber operator -- (int);

            RealNumber operator + (const RealNumber& operand) const;
            RealNumber operator - (const RealNumber& operand) const;
            RealNumber operator * (const RealNumber& operand) const;
            RealNumber operator / (const RealNumber& operand) const;
            RealNumber operator % (const RealNumber& operand) const;
            RealNumber operator ^ (const RealNumber& operand) const;
    };
}

std::ostream& operator << (std::ostream& stream,const larus::RealNumber& number);

#endif //LARUS_REAL_NUMBER
