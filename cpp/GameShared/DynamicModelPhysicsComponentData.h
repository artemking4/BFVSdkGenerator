// Object: DynamicModelPhysicsComponentData
// ClassId: 1957
// RuntimeId: 56788
// TypeInfo: 0x0000000144E6DCD0
#include "../GameplaySim/GamePhysicsComponentData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class DynamicModelPhysicsComponentData : public GameplaySim::GamePhysicsComponentData {
        Core::Vec3 ImpulseInput; // 0xB0
    }; // 0xC0
    static_assert(sizeof(DynamicModelPhysicsComponentData) == 0xC0);
}
#pragma pack(pop)