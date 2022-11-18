// Object: GameSplineData
// ClassId: 1657
// RuntimeId: 11227
// TypeInfo: 0x0000000144E6CED0
#include "../Entity/CustomSplineData.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class GameSplineData : public Entity::CustomSplineData {
        Array<Core::Vec3> Normals; // 0x30
        Int32 NumSamples; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(GameSplineData) == 0x40);
}
#pragma pack(pop)