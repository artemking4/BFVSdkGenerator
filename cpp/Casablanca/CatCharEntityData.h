// Object: CatCharEntityData
// ClassId: 2463
// RuntimeId: 967
// TypeInfo: 0x0000000144C833C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CatCharEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString In0; // 0x28
        CString In1; // 0x30
    }; // 0x38
    static_assert(sizeof(CatCharEntityData) == 0x38);
}
#pragma pack(pop)