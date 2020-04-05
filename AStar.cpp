// AStar.cpp : This file contains the 'main' function. Program execution begins and ends there.



#include <iostream>
#include "Node.h"
#include "NodeParserUtil.h"

using namespace std;


int main()
{
    string json_example = "{\"osmId\":268681610,\"latitude\" : 49.8367043,\"longitude\" : 24.0337972,\"hasCrossing\" : false,\"hasTrafficLight\" : false}";
    Node* n = NodeParserUtil::parse(json_example);

    cout << n->getOsmId();
}
