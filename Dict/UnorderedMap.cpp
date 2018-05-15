#include "UnorderedMap.h"
#include <fstream>
#ifdef _DEBUG
#	include <iostream>
using std::cout;
using std::endl;
#endif	//  _DEBUG

dict::ReadStatus dict::UnorderedMap::read(dict::path_t path) {
	std::ifstream file(path);
		if (not file.is_open()) {
		}
}

dict::Index dict::UnorderedMap::lookup(dict::word_t word) const {
	return dict::Index();
}

dict::WriteStatus dict::UnorderedMap::write(dict::path_t path) {
	return dict::WriteStatus();
}
