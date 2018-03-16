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
//
#include "skyroom_platforms.h"
//
#include <string>
#include <cassert>
#include <regex>
namespace skyroom
{
	namespace sexagesimal
	{
		//
		// Definition of zero value
		//
#define SEXAGESIMAL_ZERO			0.0f
#define SEXAGESIMAL_ZERO_PTR		nullptr
#define SEXAGESIMAL_NPTR			SEXAGESIMAL_ZEOO_PTR
#define SEXAGESIMAL_RESULT			bool
		//
		// Definition of limits sexagesimal value
		//
#define SEXAGESIMAL_DEGREE_MIN		0
#define SEXAGESIMAL_DEGREE_MAX		360
#define SEXAGESIMAL_HOURS_MIN		0
#define SEXAGESIMAL_HOURS_MAX		23
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

		// 
		// Definition of angle representation 
		//
		typedef struct SKYROOM_API angle_tag
		{
			SEXAGESIMAL_DEGREE				degree;				// Degree
			SEXAGESIMAL_MINUTS				minuts;				// Minutes
			SEXAGESIMAL_SECONDS				seconds;			// Seconds
		} SEXAGESIMAL_DMS, *sexagesimal_angle;

		//
		// Definition of time representation
		//

		typedef struct SKYROOM_API time_tag
		{
			SEXAGESIMAL_HOURS				hours;				// Hourse
			SEXAGESIMAL_MINUTS				minuts;				// Minutes
			SEXAGESIMAL_SECONDS				seconds;			// Seconds
		}SEXAGESIMAL_HMS, *sexagesimal_time;


		//
		// Definition of sexagesimal representation
		//

		typedef class SKYROOM_API sexagesimal_tag
		{

			SEXAGESIMAL_DMS					__dms__;			// date value represent
			SEXAGESIMAL_HMS					__hms__;			// time value represent
			SEXAGESIMAL_FVALUE				__val__;			// float value represent
		public:
			sexagesimal_tag() noexcept;

			/*
			C-tor of float value definition
			*/
			sexagesimal_tag(const SEXAGESIMAL_FVALUE& val_) noexcept
			{
				__val__ = val_;
#
				//TODO: Not implemented 
			}

			/*
			C-tor of SEXAGESIMAL_DMS struct definition
			*/
			sexagesimal_tag(const SEXAGESIMAL_DMS& val_) noexcept
			{
				__dms__ = val_;

				//TODO: Not implemented 
			}

			/*
			C-tor of SEXAGESIMAL_HMS struct definition
			*/
			sexagesimal_tag(const SEXAGESIMAL_HMS& val_) noexcept
			{
				__hms__ = val_;

				//TODO: Not implemented
			}

			/*
			C-tor of string value definition
			*/
			sexagesimal_tag(const std::string& val_) noexcept
			{
				//TODO: Not implemented 
			}

		}sexagesimal, *SEXAGESIMAL;

	}
}

namespace skyroom
{
	namespace sexagesimal
	{
		namespace helpers
		{

		}
	}
}