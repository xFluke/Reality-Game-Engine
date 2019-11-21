#pragma once
#include "ECSConfig.h"
#include "ContactEvent.h"
#include <React3D/reactphysics3d.h>

namespace Reality
{
	class ContactResolutionSystem : public ECSSystem
	{
	public:
		ContactResolutionSystem(rp3d::CollisionWorld& _rp3dWorld);
		void Update(float deltaTime);
		rp3d::CollisionWorld& rp3dWorld;
	};	
}