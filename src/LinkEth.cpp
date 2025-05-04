#include <LinkEth.h>
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

using namespace std::string_literals;

LinkEth::LinkEth() { std::cout << type() << "{"s << id() << ", fixedReliability "s << fixedReliability_ << "%}"s << std::endl; }   // log construction
LinkEth::~LinkEth() { std::cout << "~"s << type() << "{"s << id() << "}"s << std::endl; }                                          // log destruction

bool LinkEth::send(const std::string &message) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));   // simulate delay
    bool success = (std::rand() % 100) < fixedReliability_;        // almost 100% reliable

    if (success) {   // log sending
        std::cout << "send ok,     "s;
    } else {
        std::cout << "send failed, "s;
    }
    std::cout << "via "s << id() << ", "s << message << std::endl;

    return success;
}
