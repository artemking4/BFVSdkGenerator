// Object: DynamicArrayEntityData
// ClassId: 2672
// RuntimeId: 30289
// TypeInfo: 0x0000000144C31370
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DynamicArrayEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 InputCount; // 0x24
        CString ElementTypeName; // 0x28
        CString ContainerTypeName; // 0x30
        CString ContainerFieldName; // 0x38
    }; // 0x40
    static_assert(sizeof(DynamicArrayEntityData) == 0x40);
}
#pragma pack(pop)