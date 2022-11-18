// Object: UIHealingItemCrosshairEntityData
// ClassId: 3715
// RuntimeId: 48732
// TypeInfo: 0x0000000144D66870
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIHealingItemCrosshairEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIHealingItemCrosshairEntityData) == 0x28);
}
#pragma pack(pop)