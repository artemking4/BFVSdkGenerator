// Object: BFUIObjectCacheEntityData
// ClassId: 2303
// RuntimeId: 30404
// TypeInfo: 0x0000000144D81D20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIObjectCacheEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIObjectCacheEntityData) == 0x30);
}
#pragma pack(pop)