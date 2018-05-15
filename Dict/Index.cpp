#include "Index.h"
#include <tuple>
using dict::Index;
constexpr dict::Index::Index() : offset_(-1), length_(-1) {
}

constexpr dict::Index::Index(const size_t& offset, const size_t& length)
    : offset_(offset), length_(length) {
}

constexpr dict::Index::Index(size_t&& offset, size_t&& lenght)
    : offset_(std::move(offset)), length_(std::move(lenght)) {
}

Index& dict::Index::operator=(const Index& other) {
		if (this != &other) {
			this->offset_ = other.offset_;
			this->length_ = other.length_;
		}
	return *this;
}

Index& dict::Index::operator=(Index&& other) noexcept {
		if (this != &other) {
			this->offset_ = std::move(other.offset_);
			this->length_ = std::move(other.length_);
		}
	return *this;
}

void dict::Index::swap(Index& other) noexcept {
	xor_swap(this->offset_, other.offset_);
	xor_swap(this->length_, other.length_);
}

inline void dict::Index::xor_swap(size_t& a, size_t& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

constexpr bool operator<(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) < std::tie(right.offset_, right.length_);
}
constexpr bool operator==(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) == std::tie(right.offset_, right.length_);
}
constexpr bool operator!=(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) != std::tie(right.offset_, right.length_);
}
constexpr bool operator>=(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) >= std::tie(right.offset_, right.length_);
}
constexpr bool operator<=(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) <= std::tie(right.offset_, right.length_);
}
constexpr bool operator>(const dict::Index& left, const dict::Index& right) {
	return std::tie(left.offset_, left.length_) > std::tie(right.offset_, right.length_);
}

constexpr Index dict::make_index(size_t&& offset, size_t&& length) {
	Index(std::forward<size_t>(offset), std::forward<size_t>(length));
}
