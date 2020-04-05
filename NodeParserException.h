#pragma once

#include <iostream>
#include <exception>

using namespace std;

struct NodeParserException : public exception {
    const char* what() const throw () {
        return "NodeParserException";
    }
};
