/**
 * @file   Universe.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   January, 2014
 * @brief  This file includes the implementation of Universe Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
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
