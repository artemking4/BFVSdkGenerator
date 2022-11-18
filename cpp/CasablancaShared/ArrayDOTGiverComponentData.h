// Object: ArrayDOTGiverComponentData
// ClassId: 1748
// RuntimeId: 36439
// TypeInfo: 0x0000000144D5D160
#include "../CasablancaShared/DOTGiverBaseComponentData.h"
#include "../CasablancaShared/ArrDoTData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ArrayDOTGiverComponentData : public CasablancaShared::DOTGiverBaseComponentData {
        Array<CasablancaShared::ArrDoTData> ArrayDoT; // 0xB0
        Int32 ContinuousOnStayPriority; // 0xB8
        Boolean ContinuousOnStay; // 0xBC
        char pad_0xBD[0x3];
    }; // 0xC0
    static_assert(sizeof(ArrayDOTGiverComponentData) == 0xC0);
}
#pragma pack(pop)