#ifndef LARUS_ABSTRACT_SOLID_OBJECT
#define LARUS_ABSTRACT_SOLID_OBJECT

/**
 * @file   AbstractSolidObject.hpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the declaration of AbstractSolidObject Class.
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
 * @class AbstractSolidObject
 * @brief Solid Object class that has physcial traits
 */

#include "larus/defines.h"
#include "larus/Number.hpp"

namespace larus
{
	class AbstractSolidObject
	{
       	 public:
			AbstractSolidObject();
			AbstractSolidObject(const AbstractSolidObject&);
			~AbstractSolidObject();

			const Number& get_force() const;
			const Number& get_acceleration() const;
			const Number& get_mass() const;
			const Number& get_volume() const;
			const Number& get_density() const;
			const Number& get_weight() const;
			const Number& get_angular_momentum() const;
			const Number& get_momentum() const;
			const Number& get_surface_area() const;
			const Number& get_pressure() const;
			const Number& get_elascity() const;
			const Number& get_electrical_charge() const;
			const Number& get_electrical_field() const;
			const Number& get_electrical_potential() const;
			const Number& get_electrical_resistivity() const;
			const Number& get_electrical_impedance() const;
			const Number& get_electrical_resistance() const;
			const Number& get_electrical_current() const;
			const Number& get_fluidity() const;
			const Number& get_hardness() const;
			const Number& get_temperature() const;
			const Number& get_velocity() const;
			const Number& get_speed() const;
			const Number& get_tension() const;
			const Number& get_plane_angle() const;
			const Number& get_melting_point() const;
			const Number& get_specific_heat() const;
			const Number& get_heat_capacity() const;
			const Number& get_mechanical_energy() const;
			const Number& get_kinetic_energy() const;
			const Number& get_potential_energy() const;
			const Number& get_index_of_refraction() const;
			const Number& get_plasticity() const;
			const Number& get_speed_of_sound() const;

			void set_force(const Number& par);
			void set_acceleration(const Number& par);
			void set_mass(const Number& par);
			void set_volume(const Number& par);
			void set_density(const Number& par);
			void set_weight(const Number& par);
			void set_angular_momentum(const Number& par);
			void set_momentum(const Number& par);
			void set_surface_area(const Number& par);
			void set_pressure(const Number& par);
			void set_elascity(const Number& par);
			void set_electrical_charge(const Number& par);
			void set_electrical_field(const Number& par);
			void set_electrical_potential(const Number& par);
			void set_electrical_resistivity(const Number& par);
			void set_electrical_impedance(const Number& par);
			void set_electrical_resistance(const Number& par);
			void set_electrical_current(const Number& par);
			void set_fluidity(const Number& par);
			void set_hardness(const Number& par);
			void set_temperature(const Number& par);
			void set_velocity(const Number& par);
			void set_speed(const Number& par);
			void set_tension(const Number& par);
			void set_plane_angle(const Number& par);
			void set_melting_point(const Number& par);
			void set_specific_heat(const Number& par);
			void set_heat_capacity(const Number& par);
			void set_mechanical_energy(const Number& par);
			void set_kinetic_energy(const Number& par);
			void set_potential_energy(const Number& par);
			void set_index_of_refraction(const Number& par);
			void set_plasticity(const Number& par);
			void set_speed_of_sound(const Number& par);


        	private:
                Number force;
                Number acceleration;
                Number mass;
                Number volume;
                Number density;
                Number weight;
                Number angular_momentum;
                Number momentum;
                Number surface_area;
                Number pressure;
                Number elascity;
                Number electrical_charge;
                Number electrical_field;
                Number electrical_potential;
                Number electrical_resistivity;
                Number electrical_impedance;
                Number electrical_resistance;
                Number electrical_current;
                Number fluidity;
                Number hardness;
                Number temperature;
                Number velocity;
                Number speed;
                Number tension;
                Number plane_angle;
                Number melting_point;
                Number specific_heat;
                Number heat_capacity;
                Number mechanical_energy;
                Number kinetic_energy;
                Number potential_energy;
                Number index_of_refraction;
                Number plasticity;
                Number speed_of_sound;
	};
}

#endif
