/*
Copyright (c) 2013, Beren Oguz and Alptug Ulugol
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
#ifndef LARUS_DEFINES
#define LARUS_DEFINES

#define LARUS_ABSOLUTE_VALUE(x) ((x)<0?(-(x)):(x))
//from <cmath>
#define LARUS_E ((larus::RealNumber)2.71828182845904523536)
#define LARUS_LOG2E ((larus::RealNumber)1.44269504088896340736)
#define LARUS_LOG10E ((larus::RealNumber)0.434294481903251827651)
#define LARUS_LN2 ((larus::RealNumber)0.693147180559945309417)
#define LARUS_LN10 ((larus::RealNumber)2.30258509299404568402)
#define LARUS_PI ((larus::RealNumber)3.14159265358979323846)
#define LARUS_PI_2 ((larus::RealNumber)1.57079632679489661923)
#define LARUS_PI_4 ((larus::RealNumber)0.785398163397448309616)
#define LARUS_1_PI ((larus::RealNumber)0.318309886183790671538)
#define LARUS_2_PI ((larus::RealNumber)0.636619772367581343076)
#define LARUS_1_SQRTPI ((larus::RealNumber)0.564189583547756286948)
#define LARUS_2_SQRTPI ((larus::RealNumber)1.12837916709551257390)
#define LARUS_SQRT2 ((larus::RealNumber)1.41421356237309504880)
#define LARUS_SQRT_2 ((larus::RealNumber)0.707106781186547524401)

//Physical Constants
#define LARUS_SPEED_OF_LIGHT_IN_VACUUM_ms ((larus::RealNumber)299792458)
#define LARUS_MAGNETIC_CONST ((larus::RealNumber)12.566370614e-7)
#define LARUS_ELECTRIC_CONST ((larus::RealNumber)8.854187817e-12)
#define LARUS_IMPADANCE_OF_VACUUM ((larus::RealNumber)376.730313461)
#define LARUS_NEWTONIAN_CONST_OF_GRAVITATION_G ((larus::RealNumber)6.67384e-11)
#define LARUS_NEWTONIAN_CONST_OF_GRAVITATION_G_hbarc ((larus::RealNumber)6.70837e-39)
#define LARUS_PLANCK_CONST_js ((larus::RealNumber)6.62606957e-34)
#define LARUS_PLANCK_CONST_eVs ((larus::RealNumber)4.135667516e-15)
#define LARUS_REDUCED_PLANCK_CONST_js ((larus::RealNumber)1.054571726e-34)
#define LARUS_REDUCED_PLANCK_CONST_eVs ((larus::RealNumber)6.58211928e-16)
#define LARUS_HBAR_MULT_SPEEDOFLIGHT_MeVfm ((larus::RealNumber)197.3269718)
#define LARUS_PLANCK_MASS ((larus::RealNumber)2.17651e-8)
#define LARUS_PLANCK_MASS_ENERGY_EQUIVALENT ((larus::RealNumber)1.220932e19)
#define LARUS_PLANCK_TEMPERATURE ((larus::RealNumber)1.416833e32)
#define LARUS_PLANCK_LENGTH ((larus::RealNumber)1.616199e-35)
#define LARUS_PLANCK_TIME ((larus::RealNumber)5.39106e-44)
#define LARUS_ELEMANTRY_CHARGE ((larus::RealNumber)1.602176565e-39)
#define LARUS_MAGNETIC_FLUX_QUANTUM ((larus::RealNumber)2.067833758e-15)
#define LARUS_CONDUCTANCE_QUANTUM ((larus::RealNumber)7.7480917346e-5)
#define LARUS_ELECTRON_MASS ((larus::RealNumber)9.10938291e-31)
#define LARUS_PROTON_MASS ((larus::RealNumber)1.672621777e-27)
#define LARUS_PROTON_ELECTRON_MASS_RATIO ((larus::RealNumber)1836.15267245)
#define LARUS_FINE_STRUCTURE_CONST ((larus::RealNumber)7.2973525698e-3)
#define LARUS_INVERSE_FINE_STRUCTURE_CONST ((larus::RealNumber)137.035999074)
#define LARUS_RYDBERG_CONST ((larus::RealNumber)10973731.568539)
#define LARUS_AVOGADRO_CONST ((larus::RealNumber)6.02214129e23)
#define LARUS_FARADAY_CONST ((larus::RealNumber)96485.3365)
#define LARUS_MOLAR_GAS_CONST ((larus::RealNumber)8.3144621)
#define LARUS_BOLTZMANN_CONST ((larus::RealNumber)1.3806488e-23)
#define LARUS_STEFAN_BOLTZMAN_CONST ((larus::RealNumber)5.670373e-8)
//Non-SI units accepted for use with the SI
#define LARUS_ELECTRON_VOLT ((larus::RealNumber)1.602 176 565e-19)
#define LARUS_ATOMIC_MASS_UNIT ((larus::RealNumber)1.660538921e-27)
//earth
#define LARUS_GRAVITATIONAL_ACCELERATION_ON_EARTH ((larus::RealNumber)9.80665)
#define LARUS_SPEED_OF_SOUND_IN_AIR_ms ((larus::RealNumber)331.45)
// template to copy #define LARUS_ ((larus::RealNumber))


#include <cmath>
#include <vector>
#include <map>
#include <string>

namespace larus
{
    typedef long double PrimitiveRealNumber;
    typedef long long int PrimitiveInteger;
    typedef bool Boolean;
    typedef int Counter;
    
    typedef std::string String;
}

#include "larus/RealNumber.hpp"

namespace larus
{
    class RealNumber;
    typedef std::map<String,RealNumber> Dimentions;
}

#endif // LARUS_DEFINES
