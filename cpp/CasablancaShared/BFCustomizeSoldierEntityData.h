// Object: BFCustomizeSoldierEntityData
// ClassId: 2568
// RuntimeId: 16621
// TypeInfo: 0x0000000144D5B960
#include "../SoldierShared/CustomizeSoldierEntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFCustomizeSoldierEntityData : public SoldierShared::CustomizeSoldierEntityData {
        CString KitOverride; // 0x38
    }; // 0x40
    static_assert(sizeof(BFCustomizeSoldierEntityData) == 0x40);
}
#pragma pack(pop)