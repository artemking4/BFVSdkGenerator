// Object: BFUIWidgetReferenceElementEntityData
// ClassId: 3960
// RuntimeId: 60439
// TypeInfo: 0x0000000144D6D5B0
#include "../RimeElementsShared/RimeWidgetReferenceElementData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIWidgetReferenceElementEntityData : public RimeElementsShared::RimeWidgetReferenceElementData {
        Boolean ExcludeFromLayoutContainer; // 0x180
        char pad_0x181[0xF];
    }; // 0x190
    static_assert(sizeof(BFUIWidgetReferenceElementEntityData) == 0x190);
}
#pragma pack(pop)