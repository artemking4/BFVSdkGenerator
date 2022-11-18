// Object: GameSplineEntityData
// ClassId: 3376
// RuntimeId: 1205
// TypeInfo: 0x0000000144E6CE50
#include "../Entity/SpatialEntityData.h"
#include "../Global/Guid.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class GameSplineEntityData : public Entity::SpatialEntityData {
        Guid GameSplineDataGuid; // 0x60
        Float32 Length; // 0x70
        char pad_0x74[0x4];
        Array<Core::Vec3> DiscreteLocalPoints; // 0x78
        Array<Core::Vec3> DiscreteNormals; // 0x80
        Array<Float32> DiscreteNormalizedLengths; // 0x88
    }; // 0x90
    static_assert(sizeof(GameSplineEntityData) == 0x90);
}
#pragma pack(pop)