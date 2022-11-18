// Object: BFUIDynamicWidgetReferenceEntityData
// ClassId: 3970
// RuntimeId: 9236
// TypeInfo: 0x0000000144D9D590
#include "../DiceCommonsShared/WidgetReferenceEntityData.h"
#include "../CasablancaShared/BFUIDynamicWidgetGroupAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIDynamicWidgetReferenceEntityData : public DiceCommonsShared::WidgetReferenceEntityData {
        CasablancaShared::BFUIDynamicWidgetGroupAsset GroupAsset; // 0xC0
        Boolean CenterWidgetOnScreen; // 0xC8
        Boolean Enabled; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(BFUIDynamicWidgetReferenceEntityData) == 0xD0);
}
#pragma pack(pop)