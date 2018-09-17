#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

TEST_CASE("Base Cases"){
  CHECK(piglatinify("") == "");
  CHECK(piglatinify("a") == "ayay");
  CHECK(piglatinify("i") == "iyay");
  CHECK(piglatinify("c") == "c");
  CHECK(piglatinify("vowel") == "owelvay");
  CHECK(piglatinify("owl") == "owlyay");
}

TEST_CASE("BAD Input"){
  CHECK(piglatinify("1") == "1");
}