// Object: PropertySpamFilterEntityData
// ClassId: 3073
// RuntimeId: 62175
// TypeInfo: 0x0000000144D65E70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PropertyDebugTypeClass.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PropertySpamFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PropertyDebugTypeClass WrappedType; // 0x24
        Uint32 WrappedTypeHash; // 0x28
        Float32 WaitTime; // 0x2C
    }; // 0x30
    static_assert(sizeof(PropertySpamFilterEntityData) == 0x30);
}
#pragma pack(pop)