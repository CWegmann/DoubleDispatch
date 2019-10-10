#include <gtest/gtest.h>
#include "Class1.hpp"

TEST(Class1, Get){
    EXPECT_EQ(ns1::Class1::get(), 1);
}

TEST(Class1, PassingTest){
    EXPECT_TRUE(4 < 5);
}

TEST(Class1, FailingTest){
    EXPECT_FALSE(5 < 4);
}
