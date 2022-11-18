// Object: ObjectDataEntityData
// ClassId: 2910
// RuntimeId: 19041
// TypeInfo: 0x0000000144D12500
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ObjectDataEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer Data; // 0x28
        CString TypeName; // 0x30
    }; // 0x38
    static_assert(sizeof(ObjectDataEntityData) == 0x38);
}
#pragma pack(pop)