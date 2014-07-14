/**
 * @file   Number_Test.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   February, 2014
 * @brief  This file is used to test Number Class.
 * @copyright Copyright (c) 2013, 2014 Alptuğ Ulugöl, Beren Oğuz
 * @license Lesser GNU Public License (LGPL) <https://www.gnu.org/licenses/lgpl.html> (see LICENSE file)
 */

#include "larus/defines.h"
#include "larus/Number.hpp"
#include <utility>
#include <iostream>
#include <vector>

double larus_round(float d, int pp = 8) // pow() doesn't work with unsigned, so made this switch.
{
	return int(d * pow(10.0, pp) + .5) /  pow(10.0, pp);
}

std::pair<larus::Boolean, std::vector<larus::String>> Number_test()
{
    larus::Number x;
    x=123;
    larus::Number y=5;
    larus::Number z=10;
    larus::Number k=4;
    larus::Number l=2;
    larus::Boolean status = true;
    std::vector<larus::String> V_ERROR;


    //Testing is_defined()
    if (!x.is_defined())
    {
        status = false;
        V_ERROR.push_back("is_defined() Func. Failed!");
    }

    //Operator= Test(must return 10)
    x = z;
    if (((x.get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator= Failed!");
    }

    //Operator+= Test(must return 15)
    x += y;
    if (((x.get_value()).to_int()) != 15)
    {
        status = false;
        V_ERROR.push_back("Operator+= Failed!");
    }

    //Operator-= Test(must return 10)
    x -= y;
    if (((x.get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-= Failed!");
    }

    //Operator*= Test(must return 100)
    x *= z;
    if (((x.get_value()).to_int()) != 100)
    {
        status = false;
        V_ERROR.push_back("Operator*= Failed!");
    }

    //Operator/= Test(must return 10)
    x /= z;
    if (((x.get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator/= Failed!");
    }

    //Operator%= Test(must return 2)
    x %= k;
    if (((x.get_value()).to_int()) != 2)
    {
        status = false;
        V_ERROR.push_back("Operator%= Failed!");
    }

    //Operator* Test(must return 20)
    x = x * z;
    if (((x.get_value()).to_int()) != 20)
    {
        status = false;
        V_ERROR.push_back("Operator* Failed!");
    }

    //Operator/ Test(must return 10)
    x = x / l;
    if (((x.get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator/ Failed!");
    }



    //Operator+ Test(must return 15)
    if ((((x+y).get_value()).to_int()) != 15)
    {
        status = false;
        V_ERROR.push_back("Operator+ Failed!");
    }

    //Operator- Test(must return 5)
    if ((((x-y).get_value()).to_int()) != 5)
    {
        status = false;
        V_ERROR.push_back("Operator- Failed!");
    }

    //Operator% Test(must return 2)
    if ((((x%k).get_value()).to_int()) != 2)
    {
        status = false;
        V_ERROR.push_back("Operator% Failed!");
    }

    //Operator^ Test(must return 100)
    if ((((x^l).get_value()).to_int()) != 100)
    {
        status = false;
        V_ERROR.push_back("Operator^ Failed!");
    }


    //Operator++ Test(must return 11)
    x++;
    if (((x.get_value()).to_int()) != 11)
    {
        status = false;
        V_ERROR.push_back("Operator++ Failed!");
    }


    //Operator-- Test(must return 10)
    x--;
    if (((x.get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-- Failed!");
    }

    //Operator++ (int) Test(must return 11)
    if ((((++x).get_value()).to_int()) != 11)
    {
        status = false;
        V_ERROR.push_back("Operator++ (int) Failed!");
    }

    //Operator-- (int) Test(must return 10)
    if ((((--x).get_value()).to_int()) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-- (int) Failed!");
    }

    //log() Func. Test(must return 1)
    if ((int)((x.log().get_value()).to_double()) != 1)
    {
        status = false;
        V_ERROR.push_back("log() Func. Failed!");
        std::cout<<(x.log().get_value()).to_int() ;
    }


    //log(Number& base) Func. Test(must return 2)
    x = 4;
    if ((int)((x.log(l).get_value()).to_double()) != 2)
    {
        status = false;
        V_ERROR.push_back("log(Number& base) Func. Failed!");
    }


    //ln() Func. Test(must return 3): "<<x.ln() <<std::endl<<std::endl;
    x = (LARUS_E^3);
    if (larus_round((x.ln().get_value()).to_double()) != 3)
    {
        status = false;
        V_ERROR.push_back("ln() Func. Failed!");
        std::cout<<x<<" "<<x.ln()<<" "<<" "<<larus_round((x.ln().get_value()).to_double());

    }


    //sqrt() Func. Test(must return 4)
    x = 16;
    if (((x.sqrt().get_value()).to_int()) != 4)
    {
        status = false;
        V_ERROR.push_back("sqrt() Func. Failed!");
    }


    //cbrt() Func. Test(must return 5)
    x = 125;
    if (((x.cbrt().get_value()).to_int()) != 5)
    {
        status = false;
        V_ERROR.push_back("cbrt() Func Failed!");
    }


    //abs() Func. Test(must return 6)
    x = -6;
    if (((x.abs().get_value()).to_int()) != 6)
    {
        status = false;
        V_ERROR.push_back("abs() Func. Failed!");
    }


    //to_radian() Func. Test(must return 0.523598776)
    x = 30;
    if (x.to_radian() != (larus::Number)"0.5235987755982988527")
    {
        std::cout<<x.to_radian();
        status = false;
        V_ERROR.push_back("to_radian() Func. Failed!");
    }

    //to_degree() Func. Test(must return 30)
    x = LARUS_PI_4;
    if ((int)((x.to_degree().get_value()).to_double()) != 45)
    {
        status = false;
        V_ERROR.push_back("to_degree() Func. Failed!");
    }

    //sin() Func. Test(must return 0.7071067812): "<<x.sin()<<std::endl;
    if (x.sin() != (larus::Number)"0.70710678118654750275")
    {
        status = false;
        V_ERROR.push_back("sin() Func. Failed!");
        //std::cout<< (x.sin().get_value().to_double());
    }

    //csc() Func. Test(must return 2)
    x= ((larus::Number)30).to_radian();
    if ((int)((x.csc().get_value()).to_double()) != 2)
    {
        status = false;
        V_ERROR.push_back("csc() Func. Failed!");
    }


    //cos() Func. Test(must return 0.5)
    x=((larus::Number)60).to_radian();
    if (((x.cos().get_value()).to_double()) != 0.5)
    {
        status = false;
        V_ERROR.push_back("cos() Func. Failed!");
    }

    //sec() Func. Test(must return 2)
    if ((larus_round(x.sec().get_value().to_double())) != 2)
    {
        //std::cout<<(larus_round(x.sec().get_value().to_double()));
        status = false;
        V_ERROR.push_back("sec() Func. Failed!");
    }


    //tan() Func. Test(must return 2)
    x=1.10714872;
    if ((int)((x.tan().get_value()).to_double()) != 2)
    {
        status = false;
        V_ERROR.push_back("tan() Func. Failed!");
    }

    //cot() Func. Test(must return 0.5)
    if (larus_round((x.cot().get_value()).to_double()) != 0.5)
    {
        status = false;
        V_ERROR.push_back("cot() Func. Failed!");
        x=x.cot()+0.0000001f;
    }


    //arcsin() Func. Test(must return 30)
    x = 0.5;
    if ((int)((x.arcsin().to_degree().get_value()).to_double()) != 30)
    {
        status = false;
        V_ERROR.push_back("arcsin() Func. Failed!");
    }


    //arccsc() Func. Test(must return 30)
    x = 2;
    if (((x.arccsc().to_degree().get_value()).to_double()) != 30)
    {
        status = false;
        V_ERROR.push_back("arccsc() Func. Failed!");
    }


    //arccos() Func. Test(must return 60)
    x=0.5;
    if (((x.arccos().to_degree().get_value()).to_double()) != 60)
    {
        status = false;
        V_ERROR.push_back("arccos() Func. Failed!");
    }


    //arcsec() Func. Test(must return 60)
    x=2;
    if (((x.arcsec().to_degree().get_value()).to_double()) != 60)
    {
        status = false;
        V_ERROR.push_back("arcsec() Func. Failed!");
    }


    //arctan() Func. Test(must return 45)
    x=1;
    if (((x.arctan().to_degree().get_value()).to_double()) != 45)
    {
        status = false;
        V_ERROR.push_back("arctan() Func. Failed!");
    }

    //arccot() Func. Test(must return 45)
    if (((x.arccot().to_degree().get_value()).to_double()) != 45)
    {
        status = false;
        V_ERROR.push_back("arccot() Func. Failed!");
    }


    x=4;
    if (x.inverse() != 0.25)
    {
        status = false;
        V_ERROR.push_back("inverse() Func. Failed!");
    }

    x=32;
    if (x.root(5) != 2)
    {
        status = false;
        V_ERROR.push_back("root() Func. Failed!");
    }


    std::pair<larus::Boolean, std::vector<larus::String>> ans(status,V_ERROR);
    return ans;
}
