/**
 * @file   Variable.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   July, 2014
 * @brief  This file includes the declaration of Variable Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#ifndef LARUS_VARIABLE_HPP
#define LARUS_VARIABLE_HPP

#include "defines.h"

namespace larus
{
    class Variable
    {
        private:
            GiNaC::symbol symbol;
            larus::Number value;

        public:
            Variable(larus::String);
            ~Variable();
    }
}

#endif // LARUS_VARIABLE_HPP
