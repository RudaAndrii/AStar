#include "NodeParserUtil.h"

#include <iostream>
#include <nlohmann/json.hpp>
#include "NodeParserException.h"

using json = nlohmann::json;

Node* NodeParserUtil::parse(std::string text)
{
    Node* node = new Node();

	try
	{
		auto node_json = json::parse(text);

		node->setOsmId(node_json.value("osmId", 0));
		node->setLatitide(node_json.value("latitude", 0.));
		node->setLongitude(node_json.value("longitude", 0.));
		node->setHasCrossing(node_json.value("hasCrossing", true));
		node->setHasTrafficLight(node_json.value("hasTrafficLight", false));

		return node;
	}
	catch (const std::exception&)
	{
		throw NodeParserException();
	}
}
