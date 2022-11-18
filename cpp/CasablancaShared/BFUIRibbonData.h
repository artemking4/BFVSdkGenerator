// Object: BFUIRibbonData
// ClassId: 1240
// RuntimeId: 21518
// TypeInfo: 0x0000000144D223F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRibbonData : public Core::DataContainer {
        CString Name; // 0x18
        CString Description; // 0x20
        CString Icon; // 0x28
        CString Category; // 0x30
        CString AwardCode; // 0x38
        Int32 AwardXP; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(BFUIRibbonData) == 0x48);
}
#pragma pack(pop)