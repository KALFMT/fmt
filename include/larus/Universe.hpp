#ifndef LARUS_UNIVERSE
#define LARUS_UNIVERSE

/**
 * @file   Universe.hpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   January, 2014
 * @brief  This file includes the declaration of Universe Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

/**
 * @class Universe
 * @brief Universe class whose attributes will be environmental scalar physical quantities such as
                      gravitational acceleration or speed of light constant.
 */

#include "larus/defines.h"
#include "larus/Number.hpp"
#include "larus/AbstractSolidObject.hpp"

namespace larus
{
    class Universe
    {
        public:
            Universe();
            Universe(const Universe&);
            ~Universe();

            const Number& get_speed_of_light_in_vacuum() const;
            const Number& get_sound_of_light_in_vacuum() const;
            const Number& get_gravitational_acceleration() const;

            void set_speed_of_light_in_vacuum(const Number&);
            void set_sound_of_light_in_vacuum(const Number&);
            void set_gravitational_acceleration(const Number&);

            void add(AbstractSolidObject* const);

        private:
            std::vector<AbstractSolidObject*> objects;

            Number speed_of_light_in_vacuum;
            Number speed_of_sound_in_air;
            Number gravitational_acceleration;
    };
}

#endif
