// Object: BFUIGetItemRarityEntityData
// ClassId: 2227
// RuntimeId: 60316
// TypeInfo: 0x0000000144D807A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetItemRarityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetItemRarityEntityData) == 0x30);
}
#pragma pack(pop)