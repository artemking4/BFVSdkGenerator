// Object: PropertyDelayEntityData
// ClassId: 3061
// RuntimeId: 3796
// TypeInfo: 0x0000000144D12780
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PropertyDebugTypeClass.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PropertyDelayEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PropertyDebugTypeClass WrappedType; // 0x24
        CString TypeName; // 0x28
        Uint32 TypeHash; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(PropertyDelayEntityData) == 0x38);
}
#pragma pack(pop)