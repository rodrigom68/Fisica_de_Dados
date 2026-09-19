#include <iostream>
//static_assert(static_cast<float>(GRAVITY_VALUE) == 9.819f, "GRAVITY_VALUE must be 9.819f");
int main()
{
    float g = GRAVITY_VALUE;

    std::cout << "O valor da gravidade e: " << g <<"\n";
    return 0;
}