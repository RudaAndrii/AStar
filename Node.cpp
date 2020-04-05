#include "Node.h"
#include <iostream>

Node::Node()
{
}

Node::~Node()
{
}

Node::Node(long osmId, double latitude, double longitude, bool hasCrossing, bool hasTrafficLight)
{
	this->osmId = osmId;
	this->latitude = latitude;
	this->longitude = longitude;
	this->hasCrossing = hasCrossing;
	this->hasTrafficLight = hasTrafficLight;
}

void Node::setOsmId(long osmId)
{
	this->osmId = osmId;
}

long Node::getOsmId()
{
	return this->osmId;
}

void Node::setLatitide(double latitude)
{
	this->latitude = latitude;
}

double Node::getLatitide()
{
	return this->latitude;
}

void Node::setLongitude(double longitude)
{
	this->longitude = longitude;
}

double Node::getLongitude()
{
	return this->longitude;
}

void Node::setHasCrossing(bool hasCrossing)
{
	this->hasCrossing = hasCrossing;
}

bool Node::getHasCrossing()
{
	return this->hasCrossing;
}

void Node::setHasTrafficLight(bool hasTrafficLight)
{
	this->hasTrafficLight = hasTrafficLight;
}

bool Node::getHasTrafficLight()
{
	return this->hasTrafficLight;
}
