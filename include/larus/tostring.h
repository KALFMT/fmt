/**
 * @author Alptuğ Ulugöl
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#ifndef Larus_tostring_h
#define Larus_tostring_h
#include <sstream>


namespace GiNaC {
    template<class T>

    std::string ToString(const T& t)
    {
        std::ostringstream buf;
        buf << t;
        return buf.str();
    }
}



#endif
