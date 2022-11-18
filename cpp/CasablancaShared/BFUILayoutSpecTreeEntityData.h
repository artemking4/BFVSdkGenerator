// Object: BFUILayoutSpecTreeEntityData
// ClassId: 2296
// RuntimeId: 9044
// TypeInfo: 0x0000000144D97D10
#include "../CasablancaShared/BFUILayoutEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/SpecializationTreeAssetInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILayoutSpecTreeEntityData : public CasablancaShared::BFUILayoutEntityData {
        Float32 VerticalSpacing; // 0x28
        Float32 HorizontalSpacing; // 0x2C
        Float32 OffsetScaling; // 0x30
        Int32 Columns; // 0x34
        CasablancaShared::SpecializationTreeAssetInfo SpecTreeAssetInfo; // 0x38
    }; // 0x40
    static_assert(sizeof(BFUILayoutSpecTreeEntityData) == 0x40);
}
#pragma pack(pop)