// Object: UIArmorItemCrosshairEntityData
// ClassId: 3607
// RuntimeId: 585
// TypeInfo: 0x0000000144D667F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIArmorItemCrosshairEntityData : public Entity::EntityData {
        Boolean Enabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(UIArmorItemCrosshairEntityData) == 0x28);
}
#pragma pack(pop)