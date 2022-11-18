// Object: FollowObjectEntityData
// ClassId: 2760
// RuntimeId: 40841
// TypeInfo: 0x0000000144EABE00
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace PathfindingShared {
    class FollowObjectEntityData : public Entity::EntityData {
        Float32 Radius; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Offset; // 0x30
        Core::LinearTransform TargetTransform; // 0x40
        Boolean LocalOffset; // 0x80
        Boolean UsePathFinding; // 0x81
        char pad_0x82[0xE];
    }; // 0x90
    static_assert(sizeof(FollowObjectEntityData) == 0x90);
}
#pragma pack(pop)