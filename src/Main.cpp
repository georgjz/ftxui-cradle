#include <iostream>
#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/screen.hpp"
#include "ftxui/screen/string.hpp"


int main( int argc, char* argv[] )
{
    using namespace ftxui;
    auto screen = Screen::Create( Dimension::Fixed( 32 ), Dimension::Fixed( 10 ) );

    auto content = vbox( { text( L"One" ),
                           text( L"Two Bold" ) | bold,
                           text( L"Three" ) } );

    auto result = window( text( L"Result" ), content );

    Render( screen, result );

    std::cout << screen.ToString();
    return EXIT_SUCCESS;
}
