
#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "FirstApp.h"

int main() 
{
    Applications::FirstApp app {};

    try 
    {
        app.Run();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}