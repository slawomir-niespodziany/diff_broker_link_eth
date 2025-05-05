#include <LinkEth.h>
#include <gtest/gtest.h>

using namespace std::string_literals;

TEST(TestLinkEth, ExampleTest) {
    LinkEth linkEth = diff::Instantiator<LinkEth>("testId"s)   //
                          .make_instance();

    EXPECT_EQ(1u, 1u);
}
