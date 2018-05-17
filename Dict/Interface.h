#ifndef _INTERFACE_H
#define _INTERFACE_H
#pragma once
#include "Index.h"
#include "definitions.h"
class dict::Interface {
public:
	Interface() = default;
	virtual ~Interface();
	virtual dict::ReadStatus read(dict::path_t path)	= 0;
	virtual dict::Index lookup(dict::word_t word) const = 0;
	virtual dict::WriteStatus write(dict::path_t path)  = 0;
};
#endif // !_INTERFACE_H
