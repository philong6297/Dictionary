#ifndef _INDEX_H
#define _INDEX_H
#pragma once
#include "definitions.h"
namespace dict {
	constexpr Index make_index(size_t&& offset, size_t&& length);
}
class dict::Index final {
public:
	size_t offset_;
	size_t length_;

public:
	// Default constructor. Value-initializes both elements of the pair, first and second.
	constexpr Index();

	// Initializes offset and length
	constexpr Index(const size_t& offset, const size_t& length);

	// Initializes move offset and length
	constexpr Index(size_t&& offset, size_t&& lenght);

	// Copy constructor is defaulted, and is constexpr if copying of both elements satisfies the
	// requirements on constexpr functions.
	constexpr Index(const Index& other) = default;

	// Move constructor is defaulted, and is constexpr if moving of both elements satisfies the
	// requirements on constexpr functions.
	constexpr Index(Index&& other) = default;

	// destructor is defaulted
	~Index() = default;

public:
	// copy assignment
	Index& operator=(const Index& other);
	// move assignment
	Index& operator=(Index&& other) noexcept;
	// swap data
	void swap(Index& other) noexcept;
	// swap value using bitwise
	inline void xor_swap(size_t& a, size_t& b);
};
constexpr bool operator<(const dict::Index& left, const dict::Index& right);
constexpr bool operator==(const dict::Index& left, const dict::Index& right);
constexpr bool operator!=(const dict::Index& left, const dict::Index& right);
constexpr bool operator>=(const dict::Index& left, const dict::Index& right);
constexpr bool operator<=(const dict::Index& left, const dict::Index& right);
constexpr bool operator>(const dict::Index& left, const dict::Index& right);
#endif    // !_INDEX_H
