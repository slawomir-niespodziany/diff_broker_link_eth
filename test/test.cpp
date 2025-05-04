#include <LinkEth.h>

using namespace std::string_literals;

int main(int argc, char *argv[]) {
    LinkEth linkEth = diff::Instantiator<LinkEth>("testId"s)   //
                          .make_instance();

    // run tests here

    return 0;
}
