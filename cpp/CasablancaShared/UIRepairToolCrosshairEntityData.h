// Object: UIRepairToolCrosshairEntityData
// ClassId: 3752
// RuntimeId: 14581
// TypeInfo: 0x0000000144D43350
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIRepairToolCrosshairEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Enabled; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(UIRepairToolCrosshairEntityData) == 0x28);
}
#pragma pack(pop)