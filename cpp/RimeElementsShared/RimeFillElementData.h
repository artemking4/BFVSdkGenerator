// Object: RimeFillElementData
// ClassId: 3692
// RuntimeId: 58204
// TypeInfo: 0x0000000144F2A4A0
#include "../RimeElementsShared/RimeElementBaseData.h"
#include "../RimeShared/RimeFillStyle.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeFillElementData : public RimeElementsShared::RimeElementBaseData {
        RimeShared::RimeFillStyle FillStyle; // 0x110
        char pad_0x118[0x8];
    }; // 0x120
    static_assert(sizeof(RimeFillElementData) == 0x120);
}
#pragma pack(pop)