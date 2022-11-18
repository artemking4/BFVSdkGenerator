// Object: BFPlayerEventEntityData
// ClassId: 2106
// RuntimeId: 28082
// TypeInfo: 0x0000000144D319A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFPlayerEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFPlayerEventEntityData) == 0x28);
}
#pragma pack(pop)