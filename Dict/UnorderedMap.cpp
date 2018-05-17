#include "UnorderedMap.h"
#include <fstream>
#include <regex>
#include <string>
#ifdef _DEBUG
#	include <iostream>
using std::cout;
using std::endl;
#endif //  _DEBUG
using std::getline;
using std::string;
dict::ReadStatus dict::UnorderedMap::read(dict::path_t path) {
	std::ifstream file(path);

	if (not file.is_open()) {
		return dict::ReadStatus::Fail;
	}
	else {
		const std::regex reg("^([^\\t\\n]+)\\t(\+)\t([^\\t\\n]+)\\n?$");
		while (not file.eof()) {
			string line;
			getline(file, line);
			if (line.size() > 0) {
				auto pos		= line.find_first_of('\t');
				const auto word = line.substr(0, pos);
				if (word.size() > 0) {
					auto data = line.substr(pos);
				}
			}
		}
	}
}

dict::Index dict::UnorderedMap::lookup(dict::word_t word) const {
	return dict::Index();
}

dict::WriteStatus dict::UnorderedMap::write(dict::path_t path) {
	return dict::WriteStatus();
}
