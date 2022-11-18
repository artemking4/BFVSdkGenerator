// Object: SoldierPhysicsComponentData
// ClassId: 1951
// RuntimeId: 7763
// TypeInfo: 0x0000000144F44E30
#include "../GameShared/CharacterMasterPhysicsComponentData.h"
#include "../Global/Float32.h"
#include "../Physics/ProximityTrackerData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierPhysicsComponentData : public GameShared::CharacterMasterPhysicsComponentData {
        Float32 RadiusToPredictCollisionOnCharacters; // 0xB0
        char pad_0xB4[0x4];
        Physics::ProximityTrackerData ProximityTrackerData; // 0xB8
    }; // 0xC0
    static_assert(sizeof(SoldierPhysicsComponentData) == 0xC0);
}
#pragma pack(pop)