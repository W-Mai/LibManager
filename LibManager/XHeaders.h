#pragma once

//#define DEBUG

#ifdef DEBUG
#define DE(n) std::cout << "OK [" << n << "]" << std::endl;
#else
#define DE(n)
#endif // DEBUG

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <climits>

#include "Definitions.h"

#include "XBook.h"
#include "XUser.h"
#include "XData.h"