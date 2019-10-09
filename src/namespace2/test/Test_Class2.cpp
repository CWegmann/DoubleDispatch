#include <gtest/gtest.h>
#include "Class2.hpp"

TEST(Class2, Get){
    EXPECT_EQ(ns2::Class2::get(), 2);
}

TEST(Class2, PassingTest){
    EXPECT_TRUE(4 < 5);
}

TEST(Class2, FailingTest){
    EXPECT_TRUE(5 < 4);
}
