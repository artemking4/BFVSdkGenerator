// Object: BFGetFactionIdEntityData
// ClassId: 2099
// RuntimeId: 29483
// TypeInfo: 0x0000000144D5C7E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFGetFactionIdEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFGetFactionIdEntityData) == 0x28);
}
#pragma pack(pop)