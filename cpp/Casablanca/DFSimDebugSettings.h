// Object: DFSimDebugSettings
// ClassId: 1490
// RuntimeId: 23597
// TypeInfo: 0x0000000144C1DC00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DFSimDebugSettings : public Core::DataContainer {
        CString Name; // 0x18
        Boolean ShowInWorld; // 0x20
        Boolean ShowInfo; // 0x21
        char pad_0x22[0xE];
        Core::Vec3 Color; // 0x30
    }; // 0x40
    static_assert(sizeof(DFSimDebugSettings) == 0x40);
}
#pragma pack(pop)