// Object: WaitForTerrainEntityData
// ClassId: 3902
// RuntimeId: 8316
// TypeInfo: 0x0000000144D4BAF0
#include "../Entity/EntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WaitForTerrainEntityData : public Entity::EntityData {
        Core::Vec2 Position; // 0x20
        Float32 RequiredHeight; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(WaitForTerrainEntityData) == 0x30);
}
#pragma pack(pop)