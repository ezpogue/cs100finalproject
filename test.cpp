#include <iostream>
#include "gtest/gtest.h"

#include "typetest.hpp"
#include "movetest.hpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
