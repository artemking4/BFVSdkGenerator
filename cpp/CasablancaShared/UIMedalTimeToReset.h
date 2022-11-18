// Object: UIMedalTimeToReset
// ClassId: 5468
// RuntimeId: 38031
// TypeInfo: 0x0000000144D5F360
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMedalTimeToReset : public Core::DataContainer {
        Int32 Seconds; // 0x18
        Int32 Minutes; // 0x1C
        Int32 Hours; // 0x20
        Int32 Days; // 0x24
    }; // 0x28
    static_assert(sizeof(UIMedalTimeToReset) == 0x28);
}
#pragma pack(pop)