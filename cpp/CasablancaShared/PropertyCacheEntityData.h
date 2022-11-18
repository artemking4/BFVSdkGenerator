// Object: PropertyCacheEntityData
// ClassId: 3051
// RuntimeId: 60645
// TypeInfo: 0x0000000144D12800
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/PropertyDebugTypeClass.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PropertyCacheEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PropertyDebugTypeClass WrappedType; // 0x24
        Uint32 WrappedTypeHash; // 0x28
        Boolean LoadFirstValue; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PropertyCacheEntityData) == 0x30);
}
#pragma pack(pop)