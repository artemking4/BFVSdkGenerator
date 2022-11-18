// Object: SplineQueryEntityData
// ClassId: 3498
// RuntimeId: 55073
// TypeInfo: 0x0000000144F7C200
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WorldSplinesShared {
    class SplineQueryEntityData : public Entity::EntityData {
        Core::Vec3 built_startPos; // 0x20
        Core::Vec3 built_endPos; // 0x30
    }; // 0x40
    static_assert(sizeof(SplineQueryEntityData) == 0x40);
}
#pragma pack(pop)