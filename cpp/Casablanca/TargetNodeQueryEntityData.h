// Object: TargetNodeQueryEntityData
// ClassId: 3551
// RuntimeId: 55568
// TypeInfo: 0x0000000144C4F960
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class TargetNodeQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 TargetLocation; // 0x30
    }; // 0x40
    static_assert(sizeof(TargetNodeQueryEntityData) == 0x40);
}
#pragma pack(pop)