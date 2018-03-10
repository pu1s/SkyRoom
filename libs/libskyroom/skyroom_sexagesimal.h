/*

This file is part of Skyrom Project

MIT License

Copyright(c) 2018 Alexander Gorin

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include <cassert>

#include "skyroom_platforms.h"
//
// Definition of zero value
//
#define SEXAGESIMAL_ZERO			0.0f
//
// Definition of limits sexagesimal value
//
#define SEXAGESIMAL_DEGREE_MIN		0
#define SEXAGESIMAL_DEGREE_MAX		360
#define SEXAGESIMAL_MINUTS_MIN		0
#define SEXAGESIMAL_MINUTS_MAX		59
#define SEXAGESIMAL_SECONDS_MIN		0.0f
#define SEXAGESIMAL_SECONDS_MAX		59.99999f

//
// Definition of angle and time representation
//
#define SEXAGESIMAL_DEGREE			signed
#define SEXAGESIMAL_HOURS			signed
#define SEXAGESIMAL_MINUTS			unsigned
#define SEXAGESIMAL_SECONDS			float
#define SEXAGESIMAL_FVALUE			float
#define SEXAGESIMAL_DVALUE			double

typedef struct SKYROOM_API angle_tag
{
	signed degree;
	unsigned minuts;
	float seconds;
} angle, DMS;

//
// Definition of time representation
//

typedef struct SKYROOM_API time_tag
{
	signed hours;
	unsigned minuts;
	float seconds;
} time, HMS;

//
// Definition of float value representation
//
typedef float float_value;

//
// Definition of sexagesimal representation
//

typedef class SKYROOM_API sexagesimal_tag
{

	DMS					__dms__;
	HMS					__hms__;
	float_value			__val__;
public:
	sexagesimal_tag() noexcept;

	sexagesimal_tag(const DMS& dms_) noexcept;

	
}sexagesimal, *SEXAGESIMAL;

namespace skyroom
{
	namespace helpers
	{
		static void to_hms(const DMS& dms_, HMS& hms_) noexcept;

		template<typename FROM, typename TO, class RESULT = float>
		static RESULT swap(const FROM& __from__, TO __to__)
		{
			
		}
		
	}
}