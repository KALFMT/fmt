/**
 * @author Alptuğ Ulugöl, Beren Oğuz
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */
#ifndef LARUS_DEFINES
#define LARUS_DEFINES

#define LARUS_ABSOLUTE_VALUE(x) ((x)<0?(-(x)):(x))
//from <cmath>
#define LARUS_E ((larus::Number)2.71828182845904523536)
#define LARUS_LOG2E ((larus::Number)1.44269504088896340736)
#define LARUS_LOG10E ((larus::Number)0.434294481903251827651)
#define LARUS_LN2 ((larus::Number)0.693147180559945309417)
#define LARUS_LN10 ((larus::Number)2.30258509299404568402)
#define LARUS_PI ((larus::PrimitiveNumber)3.14159265358979323846)
#define LARUS_PI_2 ((larus::Number)1.57079632679489661923)
#define LARUS_PI_4 ((larus::Number)0.785398163397448309616)
#define LARUS_1_PI ((larus::Number)0.318309886183790671538)
#define LARUS_2_PI ((larus::Number)0.636619772367581343076)
#define LARUS_1_SQRTPI ((larus::Number)0.564189583547756286948)
#define LARUS_2_SQRTPI ((larus::Number)1.12837916709551257390)
#define LARUS_SQRT2 ((larus::Number)1.41421356237309504880)
#define LARUS_SQRT_2 ((larus::Number)0.707106781186547524401)

//Physical Constants
#define LARUS_SPEED_OF_LIGHT_IN_VACUUM_ms ((larus::Number)299792458)
#define LARUS_MAGNETIC_CONST ((larus::Number)12.566370614e-7)
#define LARUS_ELECTRIC_CONST ((larus::Number)8.854187817e-12)
#define LARUS_IMPADANCE_OF_VACUUM ((larus::Number)376.730313461)
#define LARUS_NEWTONIAN_CONST_OF_GRAVITATION_G ((larus::Number)6.67384e-11)
#define LARUS_NEWTONIAN_CONST_OF_GRAVITATION_G_hbarc ((larus::Number)6.70837e-39)
#define LARUS_PLANCK_CONST_js ((larus::Number)6.62606957e-34)
#define LARUS_PLANCK_CONST_eVs ((larus::Number)4.135667516e-15)
#define LARUS_REDUCED_PLANCK_CONST_js ((larus::Number)1.054571726e-34)
#define LARUS_REDUCED_PLANCK_CONST_eVs ((larus::Number)6.58211928e-16)
#define LARUS_HBAR_MULT_SPEEDOFLIGHT_MeVfm ((larus::Number)197.3269718)
#define LARUS_PLANCK_MASS ((larus::Number)2.17651e-8)
#define LARUS_PLANCK_MASS_ENERGY_EQUIVALENT ((larus::Number)1.220932e19)
#define LARUS_PLANCK_TEMPERATURE ((larus::Number)1.416833e32)
#define LARUS_PLANCK_LENGTH ((larus::Number)1.616199e-35)
#define LARUS_PLANCK_TIME ((larus::Number)5.39106e-44)
#define LARUS_ELEMANTRY_CHARGE ((larus::Number)1.602176565e-39)
#define LARUS_MAGNETIC_FLUX_QUANTUM ((larus::Number)2.067833758e-15)
#define LARUS_CONDUCTANCE_QUANTUM ((larus::Number)7.7480917346e-5)
#define LARUS_ELECTRON_MASS ((larus::Number)9.10938291e-31)
#define LARUS_PROTON_MASS ((larus::Number)1.672621777e-27)
#define LARUS_PROTON_ELECTRON_MASS_RATIO ((larus::Number)1836.15267245)
#define LARUS_FINE_STRUCTURE_CONST ((larus::Number)7.2973525698e-3)
#define LARUS_INVERSE_FINE_STRUCTURE_CONST ((larus::Number)137.035999074)
#define LARUS_RYDBERG_CONST ((larus::Number)10973731.568539)
#define LARUS_AVOGADRO_CONST ((larus::Number)6.02214129e23)
#define LARUS_FARADAY_CONST ((larus::Number)96485.3365)
#define LARUS_MOLAR_GAS_CONST ((larus::Number)8.3144621)
#define LARUS_BOLTZMANN_CONST ((larus::Number)1.3806488e-23)
#define LARUS_STEFAN_BOLTZMAN_CONST ((larus::Number)5.670373e-8)
//Non-SI units accepted for use with the SI
#define LARUS_ELECTRON_VOLT ((larus::Number)1.602 176 565e-19)
#define LARUS_ATOMIC_MASS_UNIT ((larus::Number)1.660538921e-27)
//earth
#define LARUS_GRAVITATIONAL_ACCELERATION_ON_EARTH ((larus::Number)9.80665)
#define LARUS_SPEED_OF_SOUND_IN_AIR_ms ((larus::Number)331.45)
// template to copy: #define LARUS_ ((larus::Number))


#include <cmath>
#include <vector>
#include <map>
#include <string>
#include "ginac/ginac.h"

namespace larus
{
    typedef GiNaC::numeric PrimitiveNumber;
    typedef GiNaC::numeric PrimitiveInteger;
    typedef bool Boolean;
    typedef int Counter;

    typedef std::string String;
}


#include "larus/Number.hpp"

namespace larus
{
    class Number;
    class Expression;
    class Variable;
    typedef std::map<String,Number> Dimentions;
}

#endif // LARUS_DEFINES
