#include "lib/add.h"
#include "gtest/gtest.h"

TEST(AddTest, AddOne) { EXPECT_EQ(add_one(5), 6); }
