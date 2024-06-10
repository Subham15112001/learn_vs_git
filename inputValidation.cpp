#include <iostream>
#include <limits>
#include <cstdlib>
#include <cassert>

static void ignoreLine() {
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '/n');
	return;
}

  bool  clearFailedExtraction() {
	if (!std::cin) {

		if (std::cin.eof()) {
			exit(0);
		}

		std::cin.clear();
		ignoreLine();

		return true;
	}
	return false;
}
