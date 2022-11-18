// Object: RimeListElementData
// ClassId: 3694
// RuntimeId: 52217
// TypeInfo: 0x0000000144F2A3A0
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../Core/DataContainer.h"
#include "../RimeShared/RimeWidgetBlueprint.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeListElementData : public RimeElementsShared::RimeElementBaseData {
        Core::DataContainer DataArray; // 0x110
        RimeShared::RimeWidgetBlueprint RowTemplate; // 0x118
        Float32 RowHeight; // 0x120
        Float32 RowSpacing; // 0x124
        Int32 DefaultIndex; // 0x128
        Boolean Wrappable; // 0x12C
        char pad_0x12D[0x3];
    }; // 0x130
    static_assert(sizeof(RimeListElementData) == 0x130);
}
#pragma pack(pop)