#include "gtest/gtest.h"
#include "fuzztest/fuzztest.h"

#include <string>

void DoesNothingReally(std::string in) {
    const auto* c_string = in.c_str();
    const std::string new_string(c_string, in.size());
    EXPECT_EQ(in, new_string);
}

FUZZ_TEST(FuzzTestDoesNothing, DoesNothingReally);