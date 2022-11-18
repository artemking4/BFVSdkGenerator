// Object: EventToIntEntityData
// ClassId: 2726
// RuntimeId: 5371
// TypeInfo: 0x0000000144D11E00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/IntSelection.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EventToIntEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::IntSelection> Selections; // 0x28
        Boolean InitializeProperty; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(EventToIntEntityData) == 0x38);
}
#pragma pack(pop)