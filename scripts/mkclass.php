<pre>
<?php
/*
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
*/
$type = "RealNumber";
$attr = array("force","acceleration","mass","volume","density","weight",
    "angular_momentum","momentum","surface_area","pressure","elascity",
    "electrical_charge","electrical_field","electrical_potential",
    "electrical_resistivity","electrical_impedance","electrical_resistance",
    "electrical_current","fluidity","hardness","temperature","velocity","speed",
    "tension","plane_angle","melting_point","specific_heat","heat_capacity","plasticity","speed_of_sound");
$name = "AbstractSolidObject";
$attrs="";
$getters="";
$setters="";

foreach($attr as $att)
{
	$setters .= "\t\tvoid set_$att(const $type& par);\n";
	$getters .= "\t\t$type get_$att() const;\n";
	$attrs .= "\t\t$type $att;\n";
}

echo <<<EOF
class $name
{
	public:
		$name();
		$name(const $name&);
		~$name();
		
$getters
$setters
	
	private:
$attrs
};
EOF;
?>
</pre>
