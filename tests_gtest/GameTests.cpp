#include <gtest/gtest.h>
#include "../header/Game.hpp"
#include <memory>


TEST(GameTests, afterCreatingGamePlayingFieldSetsUpToTrue)
{
    Game game;
    ASSERT_TRUE(game.getPlaying());
}
