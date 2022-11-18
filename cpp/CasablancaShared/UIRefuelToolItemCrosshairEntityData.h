// Object: UIRefuelToolItemCrosshairEntityData
// ClassId: 3751
// RuntimeId: 40432
// TypeInfo: 0x0000000144D66770
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIRefuelToolItemCrosshairEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIRefuelToolItemCrosshairEntityData) == 0x28);
}
#pragma pack(pop)