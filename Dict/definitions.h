#ifndef _DEFINITIONS_H
#define _DEFINITIONS_H
#pragma once

namespace dict {
	using word_t = const char*;
	using path_t = const char*;
	enum class ReadStatus : unsigned short { Success = 1, Fail = 0 };
	enum class WriteStatus : unsigned short { Success = 1, Fail = 0 };
	class Interface;
	class Index;
	class UnorderedMap;
} // namespace dict
#endif // !_DEFINITIONS_H
