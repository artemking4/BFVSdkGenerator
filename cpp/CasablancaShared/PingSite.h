// Object: PingSite
// ClassId: 4424
// RuntimeId: 42785
// TypeInfo: 0x0000000144D65D70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PingSite : public Core::DataContainer {
        CString Name; // 0x18
        Int32 Latency; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(PingSite) == 0x28);
}
#pragma pack(pop)