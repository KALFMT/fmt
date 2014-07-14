/**
 * @file   Expression.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   July, 2014
 * @brief  This file includes the declaration of Expression Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#ifndef LARUS_EXPRESSION_HPP
#define LARUS_EXPRESSION_HPP

#include "defines.h"

class Expression
{
    private:
        GiNaC::exp expression;

    public:
        Expresion(const Expression&);
        ~Expression();
}

#endif // LARUS_EXPRESSION_HPP
