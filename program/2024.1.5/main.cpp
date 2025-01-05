#include <iostream>

namespace constant1{
    const int MAX_SCORE = 100;
}

namespace constant2{
    const int MAX_SCORE = 150;
}

int main(){
    using namespace constant1;
    using namespace constant2;
    std::cout << MAX_SCORE << std::endl;

    return 0;
}

