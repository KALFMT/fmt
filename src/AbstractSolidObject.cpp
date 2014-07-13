/**
 * @file   AbstractSolidObject.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   December, 2013
 * @brief  This file includes the implementation of AbstractSolidObject Class.
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

#include "larus/AbstractSolidObject.hpp"

namespace larus
{

	AbstractSolidObject::AbstractSolidObject()
	{

	}

	AbstractSolidObject::AbstractSolidObject(const AbstractSolidObject& par)
	:force(par.force),acceleration(par.acceleration),mass(par.mass),volume(par.volume),density(par.density),weight(par.weight),angular_momentum(par.angular_momentum),momentum(par.momentum),surface_area(par.surface_area),pressure(par.pressure),elascity(par.elascity),electrical_charge(par.electrical_charge),electrical_field(par.electrical_field),electrical_potential(par.electrical_potential),electrical_resistivity(par.electrical_resistivity),electrical_impedance(par.electrical_impedance),electrical_resistance(par.electrical_resistance),electrical_current(par.electrical_current),fluidity(par.fluidity),hardness(par.hardness),temperature(par.temperature),velocity(par.velocity),speed(par.speed),tension(par.tension),plane_angle(par.plane_angle),melting_point(par.melting_point),specific_heat(par.specific_heat),heat_capacity(par.heat_capacity),mechanical_energy(par.mechanical_energy),kinetic_energy(par.kinetic_energy),potential_energy(par.potential_energy),index_of_refraction(par.index_of_refraction),plasticity(par.plasticity),speed_of_sound(par.speed_of_sound)
	{

	}

	AbstractSolidObject::~AbstractSolidObject()
	{

	}

	void AbstractSolidObject::set_force(const Number& par)
	{
		this->force = par;

		if((!this->mass.is_defined())&&(this->force.is_defined())&&(this->acceleration.is_defined()))
		{
			this->mass = this->force / this->acceleration;
		}
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_acceleration(const Number& par)
	{
		this->acceleration = par;

		if((!this->force.is_defined())&&(this->mass.is_defined())&&(this->acceleration.is_defined()))
		{
			this->force = this->mass * this->acceleration;
		}
		if((!this->mass.is_defined())&&(this->force.is_defined())&&(this->acceleration.is_defined()))
		{
			this->mass = this->force / this->acceleration;
		}
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_mass(const Number& par)
	{
		this->mass = par;

		if((!this->force.is_defined())&&(this->mass.is_defined())&&(this->acceleration.is_defined()))
		{
			this->force = this->mass * this->acceleration;
		}
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_volume(const Number& par)
	{
		this->volume = par;

		if((!this->mass.is_defined())&&(this->density.is_defined())&&(this->volume.is_defined()))
		{
			this->mass = this->density * this->volume;
		}
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_density(const Number& par)
	{
		this->density = par;

		if((!this->mass.is_defined())&&(this->density.is_defined())&&(this->volume.is_defined()))
		{
			this->mass = this->density * this->volume;
		}
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_weight(const Number& par)
	{
		this->weight = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_angular_momentum(const Number& par)
	{
		this->angular_momentum = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_momentum(const Number& par)
	{
		this->momentum = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_surface_area(const Number& par)
	{
		this->surface_area = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_pressure(const Number& par)
	{
		this->pressure = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_elascity(const Number& par)
	{
		this->elascity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_charge(const Number& par)
	{
		this->electrical_charge = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_field(const Number& par)
	{
		this->electrical_field = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_potential(const Number& par)
	{
		this->electrical_potential = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_resistivity(const Number& par)
	{
		this->electrical_resistivity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_impedance(const Number& par)
	{
		this->electrical_impedance = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_resistance(const Number& par)
	{
		this->electrical_resistance = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_electrical_current(const Number& par)
	{
		this->electrical_current = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_fluidity(const Number& par)
	{
		this->fluidity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_hardness(const Number& par)
	{
		this->hardness = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_temperature(const Number& par)
	{
		this->temperature = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_velocity(const Number& par)
	{
		this->velocity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_speed(const Number& par)
	{
		this->speed = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_tension(const Number& par)
	{
		this->tension = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_plane_angle(const Number& par)
	{
		this->plane_angle = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_melting_point(const Number& par)
	{
		this->melting_point = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_specific_heat(const Number& par)
	{
		this->specific_heat = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_heat_capacity(const Number& par)
	{
		this->heat_capacity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_mechanical_energy(const Number& par)
	{
		this->mechanical_energy = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_kinetic_energy(const Number& par)
	{
		this->kinetic_energy = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_potential_energy(const Number& par)
	{
		this->potential_energy = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_index_of_refraction(const Number& par)
	{
		this->index_of_refraction = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_plasticity(const Number& par)
	{
		this->plasticity = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	void AbstractSolidObject::set_speed_of_sound(const Number& par)
	{
		this->speed_of_sound = par;

		/*
		 * @TODO
		 * Implement this method!
		 */
	}


	const Number& AbstractSolidObject::get_force() const
	{
		return this->force;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_acceleration() const
	{
		return this->acceleration;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_mass() const
	{
		return this->mass;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_volume() const
	{
		return this->volume;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_density() const
	{
		return this->density;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_weight() const
	{
		return this->weight;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_angular_momentum() const
	{
		return this->angular_momentum;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_momentum() const
	{
		return this->momentum;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_surface_area() const
	{
		return this->surface_area;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_pressure() const
	{
		return this->pressure;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_elascity() const
	{
		return this->elascity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_charge() const
	{
		return this->electrical_charge;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_field() const
	{
		return this->electrical_field;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_potential() const
	{
		return this->electrical_potential;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_resistivity() const
	{
		return this->electrical_resistivity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_impedance() const
	{
		return this->electrical_impedance;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_resistance() const
	{
		return this->electrical_resistance;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_electrical_current() const
	{
		return this->electrical_current;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_fluidity() const
	{
		return this->fluidity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_hardness() const
	{
		return this->hardness;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_temperature() const
	{
		return this->temperature;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_velocity() const
	{
		return this->velocity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_speed() const
	{
		return this->speed;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_tension() const
	{
		return this->tension;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_plane_angle() const
	{
		return this->plane_angle;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_melting_point() const
	{
		return this->melting_point;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_specific_heat() const
	{
		return this->specific_heat;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_heat_capacity() const
	{
		return this->heat_capacity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_mechanical_energy() const
	{
		return this->mechanical_energy;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_kinetic_energy() const
	{
		return this->kinetic_energy;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_potential_energy() const
	{
		return this->potential_energy;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_index_of_refraction() const
	{
		return this->index_of_refraction;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_plasticity() const
	{
		return this->plasticity;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}

	const Number& AbstractSolidObject::get_speed_of_sound() const
	{
		return this->speed_of_sound;
		/*
		 * @TODO
		 * Implement this method!
		 */
	}


}
