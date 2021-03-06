#include <gtest/gtest.h>
#include "PokerHandEvaluator.h"

TEST(PokerHandEvaluator, OmahaHigh) {
  using namespace pokerstove;

  boost::shared_ptr<PokerHandEvaluator> evaluator =
      PokerHandEvaluator::alloc("O");
  EXPECT_EQ(true, evaluator->usesSuits());
  EXPECT_EQ(5, evaluator->boardSize());
}
