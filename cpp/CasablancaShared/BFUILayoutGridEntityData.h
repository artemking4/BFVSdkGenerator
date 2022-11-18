// Object: BFUILayoutGridEntityData
// ClassId: 2292
// RuntimeId: 63609
// TypeInfo: 0x0000000144D97D90
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutGridEntityData : public CasablancaShared::BFUILayoutEntityData {
        Float32 VerticalSpacing; // 0x28
        Float32 HorizontalSpacing; // 0x2C
        Float32 OffsetScaling; // 0x30
        Int32 Columns; // 0x34
        Boolean AllowOverflowVertical; // 0x38
        Boolean AllowOverflowHorizontal; // 0x39
        Boolean HorizontalRowWrap; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(BFUILayoutGridEntityData) == 0x40);
}
#pragma pack(pop)