#include "../skyroom_sexagesimal.h"
#include "skyroom.h"


sexagesimal_tag::sexagesimal_tag() noexcept
{
	__dms__ = DMS();
	__hms__ = HMS();
	__val__ = SEXAGESIMAL_ZERO;
}

sexagesimal_tag::sexagesimal_tag(const DMS& dms_) noexcept: __val__(SEXAGESIMAL_ZERO)
{
	assert(!&dms_);
	__dms__ = dms_;
	skyroom::helpers::to_hms(__dms__, __hms__);
	__val__ = skyroom::helpers::swap<HMS, DMS>(__hms__, __dms__);
}

void skyroom::helpers::to_hms(const DMS& dms_, HMS& hms_) noexcept
{
}



