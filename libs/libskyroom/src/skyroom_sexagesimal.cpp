#include "../skyroom_sexagesimal.h"

sexagesimal_tag::sexagesimal_tag() noexcept
{
	__dms__ = DMS();
	__hms__ = HMS();
	__val__ = SEXAGESIMAL_ZERO;
}
