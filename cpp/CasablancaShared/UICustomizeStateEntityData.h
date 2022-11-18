// Object: UICustomizeStateEntityData
// ClassId: 3622
// RuntimeId: 6517
// TypeInfo: 0x0000000144D21A70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICustomizeStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 NextState; // 0x24
        Int32 NextTab; // 0x28
        Int32 NextSlot; // 0x2C
        Int32 TargetState; // 0x30
        Int32 SelectedItemId; // 0x34
    }; // 0x38
    static_assert(sizeof(UICustomizeStateEntityData) == 0x38);
}
#pragma pack(pop)