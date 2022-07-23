#pragma once

#include <tuple>

#ifndef __FILENAME__
#define __FILENAME__ \
	(strrchr(__FILE__,'/') \
	? strrchr(__FILE__,'/')+1 \
	: (strrchr(__FILE__,'\\') \
	? strrchr(__FILE__,'\\')+1 \
	: __FILE__ \
	))
#endif

#ifndef __LINESTR__
#define __Stringize( L )     #L 
#define __MakeString( M, L ) M(L)
#define __LINESTR__ __MakeString( __Stringize, __LINE__ )
#endif

#ifndef ARGCOUNT
#define ARGCOUNT(...) std::tuple_size<decltype(std::make_tuple(__VA_ARGS__))>::value
#endif

#if PLATFORM_WINDOWS
#define TODO(msg) __pragma(message(__FILE__ "(" __LINESTR__ "): TODO -> " msg))
#else
#define TODO(msg) 
#endif
