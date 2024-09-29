// Copyright 2024 Mironov I.

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(IsPrimeTest, SmallPrimeNumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_TRUE(checkPrime(11));
  EXPECT_TRUE(checkPrime(13));
}

TEST(IsPrimeTest, Zero) {
  EXPECT_FALSE(checkPrime(0));
}

TEST(IsPrimeTest, One) {
  EXPECT_FALSE(checkPrime(1));
}

TEST(IsPrimeTest, LargePrimeNumber) {
  EXPECT_TRUE(checkPrime(1299827));
}

TEST(NthPrimeTest, ZeroThPrime) {
  EXPECT_EQ(nPrime(0), 0);
}

TEST(NthPrimeTest, LargeNthPrime) {
  EXPECT_EQ(nPrime(500), 3571);
}

TEST(NextPrimeTest, NextPrimeOfOne) {
  EXPECT_EQ(nextPrime(1), 2);
}

TEST(SumOfPrimesTest, LowSum) {
  EXPECT_EQ(sumPrime(1), 0);
}

TEST(SumOfPrimesTest, SumBelowLargeNumber) {
  EXPECT_EQ(sumPrime(200000), 1709600813);
}
