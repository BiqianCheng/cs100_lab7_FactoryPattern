#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"
#include "decorator.hpp"
#include "factory.hpp"

TEST(factoryTest, factoryEvaluateNonZero) {
    Op* value1 = new Op(3);
    Op* value2 = new Op(2);
    Op* value3 = new Op(6);

    Factory* fac = new Factory(value1, value2);
    Trunc* truncate  = new Trunc(sb);
    EXPECT_EQ(truncate->stringify(), "3.000000");
}
#endif 
