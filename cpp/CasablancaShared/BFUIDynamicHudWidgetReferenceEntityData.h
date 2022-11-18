// Object: BFUIDynamicHudWidgetReferenceEntityData
// ClassId: 3968
// RuntimeId: 24724
// TypeInfo: 0x0000000144D43950
#include "../DiceCommonsShared/WidgetReferenceEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIDynamicHudWidgetReferenceEntityData : public DiceCommonsShared::WidgetReferenceEntityData {
        Boolean CenterWidgetOnScreen; // 0xC0
        Boolean Enabled; // 0xC1
        char pad_0xC2[0xE];
    }; // 0xD0
    static_assert(sizeof(BFUIDynamicHudWidgetReferenceEntityData) == 0xD0);
}
#pragma pack(pop)