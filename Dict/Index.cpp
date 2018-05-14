#include "Index.h"

auto dict::Index::offsetRead() -> std::unique_ptr<size_t> {
	return std::make_unique<size_t>(this->first);
}

auto dict::Index::lengthRead() -> std::unique_ptr<size_t> {
	return std::make_unique<size_t>(this->second);
}

constexpr auto dict::Index::make_index(size_t&& offset, size_t&& length)
    -> std::pair<size_t, size_t> {
	return std::make_pair(offset, length);
}
