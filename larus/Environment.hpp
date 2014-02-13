/**
 * @file   Environment.hpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   January, 2014
 * @brief  This file includes the declaration of Environment Class.
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
 * @class Environment
 * @brief Environment class whose attributes will be environmental scalar physical quantities such as
                      gravitational acceleration or speed of light constant.
 */

#include "defines.h"
#include "RealNumber.hpp"

namespace larus
{
    class Environment
    {
        public:
            Environment();
            Environment(const Environment&);
            ~Environment();

            const RealNumber& get_speed_of_light_in_vacuum() const;
            const RealNumber& get_sound_of_light_in_vacuum() const;
            const RealNumber& get_gravitational_acceleration() const;

            void set_speed_of_light_in_vacuum(const RealNumber&);
            void set_sound_of_light_in_vacuum(const RealNumber&);
            void set_gravitational_acceleration(const RealNumber&);

        private:
            RealNumber speed_of_light_in_vacuum;
            RealNumber speed_of_sound_in_air;
            RealNumber gravitational_acceleration;
    };
}
