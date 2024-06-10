#pragma once
#ifndef ADD_H
#define ADD_H

  constexpr  int add(const int x, const int y);

  constexpr  int add(const int x, const int y) {
	return x + y;
  }

  namespace Math {
	 extern int subtract(int x, int y);
  }
#endif // !ADD_H

