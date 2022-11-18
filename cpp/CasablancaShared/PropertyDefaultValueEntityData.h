// Object: PropertyDefaultValueEntityData
// ClassId: 3060
// RuntimeId: 17683
// TypeInfo: 0x0000000144D12600
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PropertyDebugTypeClass.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PropertyDefaultValueEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PropertyDebugTypeClass WrappedType; // 0x24
        Uint32 WrappedTypeHash; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PropertyDefaultValueEntityData) == 0x30);
}
#pragma pack(pop)