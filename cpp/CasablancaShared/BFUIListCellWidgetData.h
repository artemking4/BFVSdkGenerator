// Object: BFUIListCellWidgetData
// ClassId: 3797
// RuntimeId: 19616
// TypeInfo: 0x0000000144D97410
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Entity/PropertyChannel.h"
#include "../Global/Int32.h"
#include "../Entity/EventChannel.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIListCellWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 DynamicWidth; // 0x80
        Float32 DynamicHeight; // 0x84
        Array<Entity::PropertyChannel> Properties; // 0x88
        Array<Int32> EventIds; // 0x90
        Array<Entity::EventChannel> Events; // 0x98
        Boolean AutoDestroyOnListRemove; // 0xA0
        Boolean CellEnabled; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(BFUIListCellWidgetData) == 0xB0);
}
#pragma pack(pop)