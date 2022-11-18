// Object: LinkArrayInfoEntityData
// ClassId: 2835
// RuntimeId: 26607
// TypeInfo: 0x0000000144D4B1F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LinkArrayInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(LinkArrayInfoEntityData) == 0x28);
}
#pragma pack(pop)