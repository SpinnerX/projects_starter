#include "core/Application.h"


Application::Application(std::string name) : title(name) {
    std::cout <<  this->title << '\n';
}