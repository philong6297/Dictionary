#ifndef _INDEX_H
#define _INDEX_H
#pragma once
#include "definitions.h"
#include <memory>
#include <utility>
class dict::Index final : private std::pair<size_t, size_t> {
  public:
	using std::pair<size_t, size_t>::pair;
	~Index() = default;
	auto offsetRead() -> std::unique_ptr<size_t>;
	auto lengthRead() -> std::unique_ptr<size_t>;
	constexpr auto make_index(size_t&& offset, size_t&& length) -> std::pair<size_t, size_t>;
};
#endif    // !_INDEX_H
