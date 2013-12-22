/**
 * @file   AbstractSolidObject.hpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the implementation of AbstractSolidObject Class.
 */
/*
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
#include "larus/RealNumber.hpp"

namespace larus
{

	class AbstractSolidObject
	{
		public:
			AbstractSolidObject();
			AbstractSolidObject(const AbstractSolidObject&);
			~AbstractSolidObject();
		
			RealNumber get_force() const;
			RealNumber get_acceleration() const;
			RealNumber get_mass() const;
			RealNumber get_volume() const;
			RealNumber get_density() const;
			RealNumber get_weight() const;
			RealNumber get_angular_momentum() const;
			RealNumber get_momentum() const;
			RealNumber get_surface_area() const;
			RealNumber get_pressure() const;
			RealNumber get_elascity() const;
			RealNumber get_electrical_charge() const;
			RealNumber get_electrical_field() const;
			RealNumber get_electrical_potential() const;
			RealNumber get_electrical_resistivity() const;
			RealNumber get_electrical_impedance() const;
			RealNumber get_electrical_resistance() const;
			RealNumber get_electrical_current() const;
			RealNumber get_fluidity() const;
			RealNumber get_hardness() const;
			RealNumber get_temperature() const;
			RealNumber get_velocity() const;
			RealNumber get_speed() const;
			RealNumber get_tension() const;
			RealNumber get_plane_angle() const;
			RealNumber get_melting_point() const;
			RealNumber get_specific_heat() const;
			RealNumber get_heat_capacity() const;
			RealNumber get_plasticity() const;
			RealNumber get_speed_of_sound() const;	

			void set_force(const RealNumber& par);
			void set_acceleration(const RealNumber& par);
			void set_mass(const RealNumber& par);
			void set_volume(const RealNumber& par);
			void set_density(const RealNumber& par);
			void set_weight(const RealNumber& par);
			void set_angular_momentum(const RealNumber& par);
			void set_momentum(const RealNumber& par);
			void set_surface_area(const RealNumber& par);
			void set_pressure(const RealNumber& par);
			void set_elascity(const RealNumber& par);
			void set_electrical_charge(const RealNumber& par);
			void set_electrical_field(const RealNumber& par);
			void set_electrical_potential(const RealNumber& par);
			void set_electrical_resistivity(const RealNumber& par);
			void set_electrical_impedance(const RealNumber& par);
			void set_electrical_resistance(const RealNumber& par);
			void set_electrical_current(const RealNumber& par);
			void set_fluidity(const RealNumber& par);
			void set_hardness(const RealNumber& par);
			void set_temperature(const RealNumber& par);
			void set_velocity(const RealNumber& par);
			void set_speed(const RealNumber& par);
			void set_tension(const RealNumber& par);
			void set_plane_angle(const RealNumber& par);
			void set_melting_point(const RealNumber& par);
			void set_specific_heat(const RealNumber& par);
			void set_heat_capacity(const RealNumber& par);
			void set_plasticity(const RealNumber& par);
			void set_speed_of_sound(const RealNumber& par);

	
		private:
			RealNumber force;
			RealNumber acceleration;
			RealNumber mass;
			RealNumber volume;
			RealNumber density;
			RealNumber weight;
			RealNumber angular_momentum;
			RealNumber momentum;
			RealNumber surface_area;
			RealNumber pressure;
			RealNumber elascity;
			RealNumber electrical_charge;
			RealNumber electrical_field;
			RealNumber electrical_potential;
			RealNumber electrical_resistivity;
			RealNumber electrical_impedance;
			RealNumber electrical_resistance;
			RealNumber electrical_current;
			RealNumber fluidity;
			RealNumber hardness;
			RealNumber temperature;
			RealNumber velocity;
			RealNumber speed;
			RealNumber tension;
			RealNumber plane_angle;
			RealNumber melting_point;
			RealNumber specific_heat;
			RealNumber heat_capacity;
			RealNumber plasticity;
			RealNumber speed_of_sound;
	
	};

}