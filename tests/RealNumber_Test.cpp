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

#include <iostream>
#include "larus.hpp"

int main()
{
    larus::RealNumber x=123;
    larus::RealNumber y=5;
    larus::RealNumber z=10;
    larus::RealNumber k=4;
    larus::RealNumber l=2;
    
    std::cout<<"is_defined() Func. Test(must return 1): "<<x.is_defined()<<std::endl<<std::endl; //Bug Report: is_defined() Func. misbehaves when RealNumber x variable is assigned to a type that is not RealNumber
    
    
    x = z;
    std::cout<<"Operator= Test(must return 10): "<<x<<std::endl;
    
    x += y;
    std::cout<<"Operator+= Test(must return 15): "<<x<<std::endl;
    
    x -= y;
    std::cout<<"Operator-= Test(must return 10): "<<x<<std::endl;
    
    x *= z;
    std::cout<<"Operator*= Test(must return 100): "<<x<<std::endl;
    
    x /= z;
    std::cout<<"Operator/= Test(must return 10): "<<x<<std::endl;
    
    x %= k;
    std::cout<<"Operator%= Test(must return 2): "<<x<<std::endl;
    
    x = x * z;
    std::cout<<"Operator* Test(must return 20): "<<x<<std::endl;
    
    x = x / l;
    std::cout<<"Operator/ Test(must return 10): "<<x<<std::endl;
    
    std::cout<<"Operator+ Test(must return 15): "<<x+y<<std::endl;
    
    std::cout<<"Operator- Test(must return 5): "<<x-y<<std::endl;
    
    std::cout<<"Operator% Test(must return 2): "<<x%k<<std::endl;
    
    std::cout<<"Operator^ Test(must return 100): "<<(x^l)<<std::endl<<std::endl;
    
    x++;
    std::cout<<"Operator++ Test(must return 11): "<<x<<std::endl;
    
    x--;
    std::cout<<"Operator-- Test(must return 10): "<<x<<std::endl;
    
    std::cout<<"Operator++ (int) Test(must return 11): "<<++x<<std::endl;
    
    std::cout<<"Operator-- (int) Test(must return 10): "<<--x<<std::endl<<std::endl;
    
    std::cout<<"log() Func. Test(must return 1): "<<x.log() <<std::endl;
    
    x = 4;
    std::cout<<"log(RealNumber& base) Func. Test(must return 2): "<<x.log(l) <<std::endl;
    
    x = std::pow(M_E, 3);
    std::cout<<"ln() Func. Test(must return 3): "<<x.ln() <<std::endl<<std::endl;
    
    x = 16;
    std::cout<<"sqrt() Func. Test(must return 4): "<<x.sqrt() <<std::endl;
    
    x = 125;
    std::cout<<"cbrt() Func. Test(must return 5): "<<x.cbrt() <<std::endl;
    
    x = -6;
    std::cout<<"AbsVal() Func. Test(must return 6): "<<x.AbsVal() <<std::endl<<std::endl;
    
    x = 30;
    x = x.to_radian();
    std::cout<<"to_radian() Func. Test(must return 0.523598776): "<<x<<std::endl;
    
    std::cout<<"to_degree() Func. Test(must return 30): "<<x.to_degree()<<std::endl<<std::endl;
    
    std::cout<<"sin() Func. Test(must return 0.5): "<<x.sin()<<std::endl;
    
    std::cout<<"csc() Func. Test(must return 1): "<<x.csc()<<std::endl;
    
    x=60;
    std::cout<<"cos() Func. Test(must return 0.5): "<<(x.to_radian()).cos()<<std::endl;
    
    std::cout<<"sec() Func. Test(must return 2): "<<(x.to_radian()).sec()<<std::endl;
    
    x=1.10714872f;
    std::cout<<"tan() Func. Test(must return 2): "<<x.tan()<<std::endl;
    
    std::cout<<"cot() Func. Test(must return 0.5): "<<x.cot()<<std::endl<<std::endl;
    
    x = 0.5;
    std::cout<<"arcsin() Func. Test(must return 30): "<<(x.arcsin()).to_degree()<<std::endl;
    
    x = 2;
    std::cout<<"arccsc() Func. Test(must return 30): "<<(x.arccsc()).to_degree()<<std::endl;
    
    x=0.5;
    std::cout<<"arccos() Func. Test(must return 60): "<<(x.arccos()).to_degree()<<std::endl;
    
    x=2;
    std::cout<<"arcsec() Func. Test(must return 60): "<<(x.arcsec()).to_degree()<<std::endl;
    
    x=2;
    std::cout<<"arctan() Func. Test(must return 63.4349489): "<<(x.arctan()).to_degree()<<std::endl;
    
    x=0.5;
    std::cout<<"arccot() Func. Test(must return 63.4349489): "<<(x.arccot()).to_degree()<<std::endl<<std::endl;
    
    
}
