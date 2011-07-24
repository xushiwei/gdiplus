//
// gdiplus.h

#ifndef __GDIPLUS_H__
#define __GDIPLUS_H__

// -------------------------------------------------------------------------

#ifdef min
#undef min
#endif //min

#ifdef max
#undef max
#endif //max

// -------------------------------------------------------------------------
// GDIP_WMF_RECORD_TO_EMFPLUS

#ifdef GDIP_WMF_RECORD_TO_EMFPLUS
#undef GDIP_WMF_RECORD_TO_EMFPLUS
#endif

// -------------------------------------------------------------------------

namespace Gdiplus
{
	inline unsigned min(unsigned a, unsigned b)
		{ return a < b ? a : b; }
	inline unsigned max(unsigned a, unsigned b)
		{ return b < a ? a : b; }
	inline int min(int a, int b)
		{ return a < b ? a : b; }
	inline int max(int a, int b)
		{ return b < a ? a : b; }
	inline unsigned min(float a, float b)
		{ return a < b ? a : b; }
	inline unsigned max(float a, float b)
		{ return b < a ? a : b; }
	inline int min(double a, double b)
		{ return a < b ? a : b; }
	inline int max(double a, double b)
		{ return b < a ? a : b; }
};

#ifndef _GDIPLUS_H
#include "gdiplus/GdiPlus.h"
#endif

// -------------------------------------------------------------------------

#endif /* __GDIPLUS_H__ */
