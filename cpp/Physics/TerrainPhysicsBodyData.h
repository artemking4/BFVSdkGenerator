// Object: TerrainPhysicsBodyData
// ClassId: 2982
// RuntimeId: 32076
// TypeInfo: 0x0000000144F0F180
#include "../Physics/PhysicsBodyData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Physics {
    class TerrainPhysicsBodyData : public Physics::PhysicsBodyData {
        Int32 SimpleTerrainSubSampleFactor; // 0x38
        Boolean UseSDFCollision; // 0x3C
        Boolean SimpleTerrainEnable; // 0x3D
        Boolean SimpleTerrainUseSDFCollision; // 0x3E
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(TerrainPhysicsBodyData) == 0x40);
}
#pragma pack(pop)