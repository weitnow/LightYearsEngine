#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>

#include "framework/Application.h"

int main()
{
	std::unique_ptr<ly::Application> app{ new ly::Application() };
	app->Run();
}