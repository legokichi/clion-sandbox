#include <iostream>
#include <boost/version.hpp>
#include "Hoge/Hoge.hpp"

using namespace std;

int main() {
    int major = BOOST_VERSION / 100000;
    int minor = BOOST_VERSION / 100 % 1000;
    int patch = BOOST_VERSION % 100;
    std::cout << BOOST_VERSION << std::endl;
    std::cout << "boost version " << major << "." << minor << "." << patch
    << " or " << BOOST_LIB_VERSION << std::endl;


    Hoge::Hoge h1(1);
    std::cout << 0 << std::endl;
    std::cout << (int)h1.value << std::endl;
    h1.huga();
    std::cout << (int)h1.value << std::endl;
    std::cout << h1.hige << std::endl;
    std::cout << 0 << std::endl;



    return 0;
}
