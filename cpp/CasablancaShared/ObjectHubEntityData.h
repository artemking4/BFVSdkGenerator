// Object: ObjectHubEntityData
// ClassId: 2912
// RuntimeId: 51797
// TypeInfo: 0x0000000144D12580
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ObjectHubEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputCount; // 0x24
        Int32 InputSelect; // 0x28
        char pad_0x2C[0x4];
        CString TypeName; // 0x30
    }; // 0x38
    static_assert(sizeof(ObjectHubEntityData) == 0x38);
}
#pragma pack(pop)