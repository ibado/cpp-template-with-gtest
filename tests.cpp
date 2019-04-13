#include "steering_wheel.h"
#include <gtest/gtest.h>

using namespace carparts;
 
TEST(SetPosition, positive) {
    SteeringWheel stw;
    stw.setPosition(7);
    ASSERT_EQ(7,stw.getPosition());
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
