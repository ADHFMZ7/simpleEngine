#define OLC_PGE_APPLICATION
#include <vector>
#include "olcPixelGameEngine.h"


struct vec3d {
    float x, y, z;
};

struct triangle {
    vec3d p[3];
};

struct mesh {
    std::vector<triangle> tris;
};









class Example : public olc::PixelGameEngine
{
public:
	Example()
	{
		sAppName = "Example";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here


		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame


		return true;
	}
};


int main()
{
	Example demo;
	if (demo.Construct(156, 140, 4, 4))
		demo.Start();

	return 0;
}
