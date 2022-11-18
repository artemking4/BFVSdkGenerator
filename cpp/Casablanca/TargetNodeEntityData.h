// Object: TargetNodeEntityData
// ClassId: 3550
// RuntimeId: 26930
// TypeInfo: 0x0000000144C4F8E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TargetNodeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(TargetNodeEntityData) == 0x28);
}
#pragma pack(pop)