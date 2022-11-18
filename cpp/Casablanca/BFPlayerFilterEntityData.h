// Object: BFPlayerFilterEntityData
// ClassId: 2107
// RuntimeId: 38321
// TypeInfo: 0x0000000144C310F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFPlayerFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean ForwardToSpectators; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(BFPlayerFilterEntityData) == 0x28);
}
#pragma pack(pop)