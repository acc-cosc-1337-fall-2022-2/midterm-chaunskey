#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("test find_gcd") {
    REQUIRE(find_gcd(5,15) == 5);
    REQUIRE(find_gcd(16,32) == 16);
    REQUIRE(find_gcd(159,309) == 3);
}