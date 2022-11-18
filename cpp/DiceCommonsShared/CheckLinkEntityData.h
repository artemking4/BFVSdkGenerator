// Object: CheckLinkEntityData
// ClassId: 2471
// RuntimeId: 2606
// TypeInfo: 0x0000000144DB5D10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CheckLinkEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(CheckLinkEntityData) == 0x28);
}
#pragma pack(pop)