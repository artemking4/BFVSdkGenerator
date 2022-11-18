// Object: PropertyChangeListenerEntityData
// ClassId: 3054
// RuntimeId: 63454
// TypeInfo: 0x0000000144D12700
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/PropertyDebugTypeClass.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PropertyChangeListenerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        CasablancaShared::PropertyDebugTypeClass WrappedType; // 0x24
        Uint32 WrappedTypeHash; // 0x28
        Boolean ReportOnUpdateFromNothing; // 0x2C
        Boolean FireOnChangeOnInit; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(PropertyChangeListenerEntityData) == 0x30);
}
#pragma pack(pop)