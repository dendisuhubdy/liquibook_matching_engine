// This is a pre-compiled header file that 
// is there to speed up compilation time

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <cmath>
#include <list>
#include <functional>
#include <algorithm>
#include <exception>
#include <string>
#include <stdexcept>
#include <map>
#include <cstdlib>
#include <cstdint>
#include <stdexcept>

#pragma once
// clock_gettime is not defined on Windows / msvc
// Let's fix that.
#include <time.h>
#ifdef _MSC_VER 
// Windows.h should already be included, but Just In Case
#include <Windows.h>
