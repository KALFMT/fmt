//
//  tostring.h
//  Larus
//
//  Exact copy of tostring.h in the new version GiNaC
//
//

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
