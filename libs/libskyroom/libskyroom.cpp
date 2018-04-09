#include "include\libskyroom.h"

skyroom::sexagesimal_tag::sexagesimal_tag() noexcept
 {
	_value = 0.0;
	_hms.hrs = 0;
	_hms.min = 0;
	_hms.sec = 0.0;
	_dms.deg = 0;
	_dms.min = 0;
	_dms.sec = 0.0;
	_helper = new helpers();
}

skyroom::sexagesimal_tag::~sexagesimal_tag()
{
	delete _helper;
	_helper = nullptr;
}

skyroom::sexagesimal_tag::sexagesimal_tag(const dms & dms_) noexcept : sexagesimal_tag()
{
	_dms = dms_;
}

skyroom::sexagesimal_tag::sexagesimal_tag(const hms & hms_) noexcept : sexagesimal_tag()
{
	_hms = hms_;
}

skyroom::sexagesimal_tag::sexagesimal_tag(const double & value_) noexcept: sexagesimal_tag()
{
	_value = value_;
	_helper->from_double_to_dms(_value, &_dms);
	_helper->from_double_to_hms(_value, &_hms);
}

const double skyroom::sexagesimal_tag::get_value(void) noexcept
{
	return _value;
}

const skyroom::hms skyroom::sexagesimal_tag::get_hms(void) noexcept
{
	return _hms;
}

const skyroom::dms skyroom::sexagesimal_tag::get_dms(void) noexcept
{
	return _dms;
}

void skyroom::sexagesimal_tag::from_double(const double & val) noexcept
{
	_value = val;
	_helper->from_double_to_hms(_value, &_hms);
	_helper->from_double_to_dms(_value, &_dms);
}

void skyroom::sexagesimal_tag::from_angle(const signed & deg, const unsigned & min, const double & sec) noexcept
{
	_dms.deg = deg;
	_dms.min = min;
	_dms.sec = sec;
	_value = _helper->from_dms_to_double(_dms);
	_helper->from_double_to_hms(_value, &_hms);
}

void skyroom::sexagesimal_tag::from_time(const signed & hrs, const unsigned & min, const double & sec) noexcept
{
	_hms.hrs = hrs;
	_hms.min = min;
	_hms.sec = sec;
	_value = _helper->from_hms_to_double(_hms);
	_helper->from_double_to_dms(_value, &_dms);
}

const string skyroom::sexagesimal_tag::get_string(void) noexcept
{
	return string();
}

void skyroom::sexagesimal_tag::sexagesimal_tag_helpers::from_double_to_hms(const double & val, HMS hms) noexcept
{
	//TODO: not implemented
}

void skyroom::sexagesimal_tag::sexagesimal_tag_helpers::from_double_to_dms(const double & val, DMS dms) noexcept
{
	//TODO: not implemented
}

double skyroom::sexagesimal_tag::sexagesimal_tag_helpers::from_hms_to_double(const hms & hms) noexcept
{
	//TODO: not implemented
	return 0.0;
}

double skyroom::sexagesimal_tag::sexagesimal_tag_helpers::from_dms_to_double(const dms & dms) noexcept
{
	//TODO: not implemented
	return 0.0;
}

double skyroom::sexagesimal_tag::sexagesimal_tag_helpers::to_dms(const signed & degree, const unsigned & minutes, const double & seconds, DMS dms) noexcept
{
	//TODO: not implemented
	return 0.0;
}

double skyroom::sexagesimal_tag::sexagesimal_tag_helpers::to_hms(const signed & hours, const unsigned & minutes, const double & seconds, HMS hms) noexcept
{
	//TODO: not implemented
	return 0.0;
}
