#include <gtest/gtest.h>
#include "../header/Game.hpp"


TEST(GameTests, afterCreatingGamePlayingFieldSetsUpToTrue)
{
    Game game;
    ASSERT_TRUE(game.getPlaying());
}