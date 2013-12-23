#!/usr/bin/env python3

"""
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
DISCLAIMED. IN NO EVENT SHALL BEREN OGUZ BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
"""


"""
 * PART 1- CONFIGURATION
* Change related variables to create C++ code for Larus Project
* name -> Name of the target class
* attributes -> An array that includes attributes. Indexes will be named after
*
"""

name = "AbstractSolidObject"
brief = "Solid Object class that has physcial traits"
typeofvar = "ReelNumber"
attributes = ["force","acceleration","mass","volume","density","weight",
    "angular_momentum","momentum","surface_area","pressure","elascity",
    "electrical_charge","electrical_field","electrical_potential",
    "electrical_resistivity","electrical_impedance","electrical_resistance",
    "electrical_current","fluidity","hardness","temperature","velocity","speed",
    "tension","plane_angle","melting_point","specific_heat","heat_capacity",
    "plasticity","speed_of_sound"]

"""
* PART 2- IMPLEMENTATION
* This part will prepare necessary parts of the code that will be created.
"""

setters=[]
getters=[]
privates=[]
setter_implemens=[]
getter_implemens=[]

attlength=len(attributes)
for i in range(0,attlength):
    setters.append("\t\t\tvoid set_" + attributes[i] + "(const "+typeofvar+"& par);\n")
    getters.append("\t\t\t"+typeofvar+" get_"+attributes[i]+"() const;\n")
    privates.append("\t\t\t"+typeofvar+" "+attributes[i]+";\n")
    setter_implemens.append("\tvoid "+name+"::set_"+attributes[i]+"(const "+typeofvar+"& par)\n\t{\n\t\t/*\n\t\t * @TODO\n\t\t * Implement this method!\n\t\t */\n\t}\n\n")
    getter_implemens.append("\t"+typeofvar+" get_"+attributes[i]+"() const\n\t{\n\t\t/*\n\t\t * @TODO\n\t\t * Implement this method!\n\t\t */\n\t}\n\n")


def writehpp(array0):

    """this function writes into a .hpp file"""

    for elm in array0:
        hpp_file.write(elm)
    return


def writecpp(array0):

    """this function writes into a .cpp file"""

    for elm in array0:
        cpp_file.write(elm)
    return

"""
* PART 3- CODE DUMP
* This part echoes both declaration and implementation codes of the class in C++
"""

with open(name+".hpp", "wt") as hpp_file:
    hpp_file.write("""/**
    * @file """+name+""".hpp
    * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
    * @date December, 2013
    * @brief This file includes the declaration of """+name+""" Class.
    * @copyright
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

    /**
    * @class """+name+"""
    * @brief """+brief+"""
    */

    #include "defines.h"

    namespace larus
    {
            class $name
            {
             public:
    \t\t\t"""+name+"""();
    \t\t\t"""+name+"""(const """+name+"""&);
    \t\t\t~"""+name+"""();
    """)
    writehpp(getters)
    writehpp(setters)
    hpp_file.write("""
            private:
    """)
    writehpp(privates)
    hpp_file.write("""
            };
    }

    """)

with open(name+".cpp", "wt") as cpp_file:
    cpp_file.write("""/**
    * @file """+name+""".hpp
    * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
    * @date December, 2013
    * @brief This file includes the declaration of """+name+""" Class.
    * @copyright
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

    #include "larus/"""+name+""".hpp"

    namespace larus
    {""")
    writecpp(setter_implemens)
    writecpp(getter_implemens)
    cpp_file.write("}")
