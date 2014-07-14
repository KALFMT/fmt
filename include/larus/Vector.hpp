/**
 * @author Alptuğ Ulugöl, Beren Oğuz
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#ifndef LARUS_VECTOR_H
#define LARUS_VECTOR_H

#include "larus/defines.h"


namespace larus
{
    class Vector
    {
        private:
            Dimentions dims;

        public:
            Vector();
            ~Vector();

            Number operator [] (const String&) const;
            Number& operator [] (const String&);

            Vector operator + (const Vector&) const;
            Vector operator - (const Vector&) const;

            Number magnitude() const;
            Number argument() const;
            Number azimuthal() const;
    };
}

#endif // LARUS_VECTOR_H
