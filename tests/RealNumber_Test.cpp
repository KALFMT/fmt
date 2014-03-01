/**
 * @file   RealNumber_Test.cpp
 * @author Beren Oguz, Alptug Ulugol (kadikoyanadoluieee@gmail.com)
 * @date   February, 2014
 * @brief  This file is used to test RealNumber Class.
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

#include "larus/defines.h"
#include "larus/RealNumber.hpp"
#include <utility>
#include <iostream>
#include <vector>

double larus_round(float d, int pp = 8) // pow() doesn't work with unsigned, so made this switch.
{
	return int(d * pow(10.0, pp) + .5) /  pow(10.0, pp);
}

std::pair<larus::Boolean, std::vector<larus::String>> RealNumber_test()
{
    larus::RealNumber x=123;
    larus::RealNumber y=5;
    larus::RealNumber z=10;
    larus::RealNumber k=4;
    larus::RealNumber l=2;
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
    if (((int)(x.get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator= Failed!");
    }
    
    //Operator+= Test(must return 15)
    x += y;
    if (((int)(x.get_value())) != 15)
    {
        status = false;
        V_ERROR.push_back("Operator+= Failed!");
    }
    
    //Operator-= Test(must return 10)
    x -= y;
    if (((int)(x.get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-= Failed!");
    }
    
    //Operator*= Test(must return 100)
    x *= z;
    if (((int)(x.get_value())) != 100)
    {
        status = false;
        V_ERROR.push_back("Operator*= Failed!");
    }
 
    //Operator/= Test(must return 10)
    x /= z;
    if (((int)(x.get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator/= Failed!");
    }
    
    //Operator%= Test(must return 2)
    x %= k;
    if (((int)(x.get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("Operator%= Failed!");
    }
    
    //Operator* Test(must return 20)
    x = x * z;
    if (((int)(x.get_value())) != 20)
    {
        status = false;
        V_ERROR.push_back("Operator* Failed!");
    }
    
    //Operator/ Test(must return 10)
    x = x / l;
    if (((int)(x.get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator/ Failed!");
    }
    
    
    
    //Operator+ Test(must return 15)
    if (((int)((x+y).get_value())) != 15)
    {
        status = false;
        V_ERROR.push_back("Operator+ Failed!");
    }
    
    //Operator- Test(must return 5)
    if (((int)((x-y).get_value())) != 5)
    {
        status = false;
        V_ERROR.push_back("Operator- Failed!");
    }
    
    //Operator% Test(must return 2)
    if (((int)((x%k).get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("Operator% Failed!");
    }
    
    //Operator^ Test(must return 100)
    if (((int)((x^l).get_value())) != 100)
    {
        status = false;
        V_ERROR.push_back("Operator^ Failed!");
    }
    
    
    //Operator++ Test(must return 11)
    x++;
    if (((int)(x.get_value())) != 11)
    {
        status = false;
        V_ERROR.push_back("Operator++ Failed!");
    }
    
    
    //Operator-- Test(must return 10)
    x--;
    if (((int)(x.get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-- Failed!");
    }
    
    //Operator++ (int) Test(must return 11)
    if (((int)((++x).get_value())) != 11)
    {
        status = false;
        V_ERROR.push_back("Operator++ (int) Failed!");
    }
    
    //Operator-- (int) Test(must return 10)
    if (((int)((--x).get_value())) != 10)
    {
        status = false;
        V_ERROR.push_back("Operator-- (int) Failed!");
    }
    
    //log() Func. Test(must return 1)
    if (((int)(x.log().get_value())) != 1)
    {
        status = false;
        V_ERROR.push_back("log() Func. Failed!");
    }
    
    
    //log(RealNumber& base) Func. Test(must return 2)
    x = 4;
    if (((int)(x.log(l).get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("log(RealNumber& base) Func. Failed!");
    }
    
    
    //ln() Func. Test(must return 3): "<<x.ln() <<std::endl<<std::endl;
    x = (LARUS_E^3);
    if (larus_round(x.ln().get_value()) != 3)
    {
        status = false;
        V_ERROR.push_back("ln() Func. Failed!");
        std::cout<<x;
    }
    
    
    //sqrt() Func. Test(must return 4)
    x = 16;
    if (((int)(x.sqrt().get_value())) != 4)
    {
        status = false;
        V_ERROR.push_back("sqrt() Func. Failed!");
    }
    
    
    //cbrt() Func. Test(must return 5)
    x = 125;
    if (((int)(x.cbrt().get_value())) != 5)
    {
        status = false;
        V_ERROR.push_back("cbrt() Func Failed!");
    }
    
    
    //AbsVal() Func. Test(must return 6)
    x = -6;
    if (((int)(x.AbsVal().get_value())) != 6)
    {
        status = false;
        V_ERROR.push_back("AbsVal() Func. Failed!");
    }
    
    
    //to_radian() Func. Test(must return 0.523598776)
    x = 30;
    if (((float)(x.to_radian().get_value())) != 0.523598776f)
    {
        status = false;
        V_ERROR.push_back("to_radian() Func. Failed!");
    }
    
    //to_degree() Func. Test(must return 30)
    x = LARUS_PI_4;
    if (((int)(x.to_degree().get_value())) != 45)
    {
        status = false;
        V_ERROR.push_back("to_degree() Func. Failed!");
    }
    
    //sin() Func. Test(must return 0.7071067812): "<<x.sin()<<std::endl;
    if (((float)(x.sin().get_value())) != 0.7071067812f)
    {
        status = false;
        V_ERROR.push_back("sin() Func. Failed!");
    }
    
    //csc() Func. Test(must return 2)
    x= ((larus::RealNumber)30).to_radian();
    if (((int)(x.csc().get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("csc() Func. Failed!");
    }
    
    
    //cos() Func. Test(must return 0.5)
    x=((larus::RealNumber)60).to_radian();
    if (((double)(x.cos().get_value())) != 0.5)
    {
        status = false;
        V_ERROR.push_back("cos() Func. Failed!");
    }
    
    //sec() Func. Test(must return 2)
    if (((int)(x.sec().get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("sec() Func. Failed!");
    }
    
    
    //tan() Func. Test(must return 2)
    x=1.10714872;
    if (((int)(x.tan().get_value())) != 2)
    {
        status = false;
        V_ERROR.push_back("tan() Func. Failed!");
    }
    
    //cot() Func. Test(must return 0.5)
    if (larus_round(x.cot().get_value()) != 0.5)
    {
        status = false;
        V_ERROR.push_back("cot() Func. Failed!");
        x=x.cot()+0.0000001f;
    }
    
    
    //arcsin() Func. Test(must return 30)
    x = 0.5;
    if (((int)(x.arcsin().to_degree().get_value())) != 30)
    {
        status = false;
        V_ERROR.push_back("arcsin() Func. Failed!");
    }
    
    
    //arccsc() Func. Test(must return 30)
    x = 2;
    if (((int)(x.arccsc().to_degree().get_value())) != 30)
    {
        status = false;
        V_ERROR.push_back("arccsc() Func. Failed!");
    }
    
    
    //arccos() Func. Test(must return 60)
    x=0.5;
    if (((int)(x.arccos().to_degree().get_value())) != 60)
    {
        status = false;
        V_ERROR.push_back("arccos() Func. Failed!");
    }
    
    
    //arcsec() Func. Test(must return 60)
    x=2;
    if (((int)(x.arcsec().to_degree().get_value())) != 60)
    {
        status = false;
        V_ERROR.push_back("arcsec() Func. Failed!");
    }
    
    
    //arctan() Func. Test(must return 45)
    x=1;
    if (((int)(x.arctan().to_degree().get_value())) != 45)
    {
        status = false;
        V_ERROR.push_back("arctan() Func. Failed!");
    }
    
    //arccot() Func. Test(must return 45)
    if (((int)(x.arccot().to_degree().get_value())) != 45)
    {
        status = false;
        V_ERROR.push_back("arccot() Func. Failed!");
    }
    

    std::pair<larus::Boolean, std::vector<larus::String>> ans(status,V_ERROR);
    return ans;
}
