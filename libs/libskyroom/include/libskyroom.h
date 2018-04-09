#pragma once

#include <cstdlib>
#include <cassert>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

namespace skyroom
{
	/*
	Definition of limits
	*/
#define SEXAGESIMAL_MIN_MIN		0
#define SEXAGESIMAL_MIN_MAX		60.0
#define SEXAGESIMAL_SEC_MIN		0
#define SEXAGESIMAL_SEC_MAX		60.0

	typedef struct sexagesimal_angle_tag
	{
		signed					deg;
		unsigned				min;
		double					sec;
	}sexagesimal_angle, dms, *DMS;

	typedef struct sexagesimal_time_tag
	{
		signed					hrs;
		unsigned				min;
		double					sec;
	}sexagsimal_time, hms, *HMS;

	typedef class sexagesimal_format;

	typedef class sexagesimal_tag
	{
		typedef enum class sexagesimal_tag_data_type
		{
			angle,
			time
		}data_type;
		typedef	class sexagesimal_tag_helpers
		{
		public:
			void __cdecl from_double_to_hms(const double& val, HMS hms) noexcept;
			void __cdecl from_double_to_dms(const double& val, DMS dms) noexcept;
			double __cdecl from_hms_to_double(const hms& hms) noexcept;
			double __cdecl from_dms_to_double(const dms& dms) noexcept;
			double __cdecl to_dms(const signed& degree, const unsigned& minutes, const double& seconds, DMS dms) noexcept;
			double __cdecl to_hms(const signed& hours, const unsigned& minutes, const double& seconds, HMS hms) noexcept;
		}helpers;

		dms						_dms;
		hms						_hms;
		double					_value;
		helpers*				_helper;
	public:
		/*
		 Новый экземпляр шестидесятеричного выражения
		 */
		sexagesimal_tag() noexcept;
		/*
		Деструктор
		*/
		~sexagesimal_tag();
		/*
		Новый экземпляр шестидесятеричного выражения
		*/
		sexagesimal_tag(const dms&) noexcept;
		/*
		Новый экземпляр шестидесятеричного выражения
		*/
		sexagesimal_tag(const hms&) noexcept;
		/*
		Новый экземпляр шестидесятеричного выражения
		*/
		sexagesimal_tag(const double&) noexcept;
		/*
		Возвращает значение двойной точности
		*/
		const double get_value(void) noexcept;
		/*
		Возвращает значение, представленное структурой часы, минуты, секунды
		*/
		const hms get_hms(void) noexcept;
		/*
		Возвращает значение, представленное структурой угол, минуты, секунды
		*/
		const dms get_dms(void) noexcept;
		/*

		*/
		void from_double(const double& val) noexcept;
		void from_angle(const signed& deg, const unsigned& min, const double& sec) noexcept;
		void from_time(const signed& hrs, const unsigned& min, const double& sec) noexcept;
		const string get_string(void) noexcept;
		const string get_string(const sexagesimal_format& frmt) noexcept;
	}sexagesimal;

	typedef class sexagesimal_format
	{
		
	}format;
}

