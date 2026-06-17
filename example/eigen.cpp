// The MIT License (MIT)
//
// Copyright (c) 2018 Mateusz Pusz
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! Before you commit any changes to this file please make sure to check if it !!!
// !!! renders correctly in the documentation "Examples" section.                 !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <Eigen/Eigen>
#include <fcarouge/typed_linear_algebra.hpp>
#include <mp-units/compat_macros.h>
#include <mp-units/ext/format.h>
#ifdef MP_UNITS_IMPORT_STD
import std;
#else
#include <iostream>
#endif
#ifdef MP_UNITS_MODULES
import mp_units;
#else
#include <mp-units/systems/si.h>
#endif


using namespace mp_units;

int main()
{
using vector_of_3_velocities = 
fcarouge::typed_column_vector<
  Eigen::Vector<double, 3>,
                        isq::velocity[si::metre / si::second],
                        isq::velocity[si::metre / si::second],
                        isq::velocity[si::metre / si::second]>;

using 3d_velocity_vector =
quantity<isq::velocity[si::metre / si::second], vector_of_3_velocities>;

// Hey! That's not very useful/safe! We prefer [Vx, Vy, Vz] not [V, V, V]! Right?

// Does it still work when we do this [hypothetical] code:
// using vector_of_3_velocities = 
// fcarouge::typed_column_vector<
//   Eigen::Vector<double, 3>,
//                         frame<"x", isq::velocity[si::metre / si::second]>,
//                         frame<"y", isq::velocity[si::metre / si::second]>,
//                         frame<"z", isq::velocity[si::metre / si::second]>>;

}
