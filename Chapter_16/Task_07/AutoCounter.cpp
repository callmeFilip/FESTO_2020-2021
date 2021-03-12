//: C16:AutoCounter.cpp {O}
// Definition of static class members
#include "AutoCounter.h"

AutoCounter::CleanupCheck AutoCounter::verifier;
int AutoCounter::m_count = 0;

///:~