#pragma once

#include "pch.h"
#include <Kore/Math/Vector.h>
#include <Kore/Graphics4/PipelineState.h>

const double PI_2 = Kore::pi / 2.0;

class Camera
{
private:
	void moveCamera( Kore::vec3 const& direction,
					 Kore::vec3 const& right,
					 Kore::vec3 const& up );

public:
	void update();
	Camera( Kore::Graphics4::PipelineState* pipeline,
			Kore::vec3 const& pos,
			Kore::vec2i const& dimensions,
			Kore::vec2 const& cameraAngles );
};
