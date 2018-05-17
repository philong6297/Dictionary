#ifndef _UNORDEREDMAP_H
#define _UNORDEREDMAP_H

#pragma once
#include "Interface.h"
#include "definitions.h"
#include <unordered_map>
class dict::UnorderedMap final
	: private std::unordered_map<dict::word_t, dict::Index>
	, public dict::Interface {
public:
	using std::unordered_map<dict::word_t, dict::Index>::unordered_map;
	~UnorderedMap() override = default;
	dict::ReadStatus read(dict::path_t path) override;
	dict::Index lookup(dict::word_t word) const override;
	dict::WriteStatus write(dict::path_t path) override;
};
#endif // !_UNORDEREDMAP_H
