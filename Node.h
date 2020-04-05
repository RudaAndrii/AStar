#pragma once
class Node
{
public:
	Node();
	~Node();
	Node(long, double, double, bool, bool);

	void setOsmId(long);
	long getOsmId();

	void setLatitide(double);
	double getLatitide();

	void setLongitude(double);
	double getLongitude();

	void setHasCrossing(bool);
	bool getHasCrossing();

	void setHasTrafficLight(bool);
	bool getHasTrafficLight();

private:
	long osmId;
	double latitude;
	double longitude;
	bool hasCrossing;
	bool hasTrafficLight;
};

