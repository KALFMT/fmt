/**
 * @file   Universe.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   January, 2014
 * @brief  This file includes the implementation of Universe Class.
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

#include "larus/Universe.hpp"

namespace larus
{
    Universe::Universe()
    :objects(std::vector<AbstractSolidObject*>()), speed_of_light_in_vacuum(LARUS_SPEED_OF_LIGHT_IN_VACUUM_ms), speed_of_sound_in_air(LARUS_SPEED_OF_SOUND_IN_AIR_ms), gravitational_acceleration(LARUS_GRAVITATIONAL_ACCELERATION_ON_EARTH)
    {
        
    }

    Universe::Universe(const Universe& other)
    :objects(other.objects), speed_of_light_in_vacuum(other.speed_of_light_in_vacuum), speed_of_sound_in_air(other.speed_of_sound_in_air), gravitational_acceleration(other.gravitational_acceleration)
    {

    }

    Universe::~Universe()
    {
        for(std::vector<AbstractSolidObject*>::iterator iterator = this->objects.begin(); iterator <= this->objects.end(); ++iterator)
        {
            delete[] (*iterator);
        }
    }

    const Number& Universe::get_speed_of_light_in_vacuum() const
    {
        return this->speed_of_light_in_vacuum;
    }

    const Number& Universe::get_sound_of_light_in_vacuum() const
    {
        return this->speed_of_sound_in_air;
    }

    const Number& Universe::get_gravitational_acceleration() const
    {
        return this->gravitational_acceleration;
    }

    void Universe::set_speed_of_light_in_vacuum(const Number& par)
    {
        this->speed_of_light_in_vacuum = par;
    }

    void Universe::set_sound_of_light_in_vacuum(const Number& par)
    {
        this->speed_of_sound_in_air = par;
    }

    void Universe::set_gravitational_acceleration(const Number& par)
    {
        this->gravitational_acceleration = par;
    }

    void Universe::add(AbstractSolidObject* const object)
    {
        this->objects.push_back(object);
    }
}
