//    Copyright 2010 Chris Jang
//
//    This file is part of GATLAS.
//
//    GATLAS is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Lesser General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    GATLAS is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU Lesser General Public License for more details.
//
//    You should have received a copy of the GNU Lesser General Public License
//    along with GATLAS.  If not, see <http://www.gnu.org/licenses/>.

#include "GatlasType.hpp"

#include "declare_namespace"

// template<> std::string nameof<...>()
// for:
//     T
//     T *
//     const T
//     const T *
DECL_TYPE_FUNCS(int)
DECL_TYPE_FUNCS(long)
DECL_TYPE_FUNCS(float)
DECL_TYPE_FUNCS(double)
DECL_TYPE_FUNCS(char)
DECL_TYPE_FUNCS(unsigned int)
DECL_TYPE_FUNCS(unsigned long)
DECL_TYPE_FUNCS(unsigned char)
DECL_TYPE_FUNCS(void)
DECL_TYPE_FUNCS(image2d_t)
DECL_TYPE_FUNCS(sampler_t)

// template<> std::string nameof<...>()
// where: N = 2, 4, 8, 16 for:
//     VecType<SCALAR, N>
//     VecType<SCALAR, N> *
//     const VecType<SCALAR, N>
//     const VecType<SCALAR, N> *
DECL_VECTYPES_FUNCS(int)
DECL_VECTYPES_FUNCS(long)
DECL_VECTYPES_FUNCS(float)
DECL_VECTYPES_FUNCS(double)
DECL_VECTYPES_FUNCS(char)
DECL_VECTYPES_FUNCS(unsigned int)
DECL_VECTYPES_FUNCS(unsigned long)
DECL_VECTYPES_FUNCS(unsigned char)

}; // namespace
