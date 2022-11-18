// Object: StatReferenceEntityData
// ClassId: 3518
// RuntimeId: 55759
// TypeInfo: 0x0000000144DC9F40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatReferenceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString StatKey; // 0x28
    }; // 0x30
    static_assert(sizeof(StatReferenceEntityData) == 0x30);
}
#pragma pack(pop)