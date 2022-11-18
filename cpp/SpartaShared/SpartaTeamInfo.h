// Object: SpartaTeamInfo
// ClassId: 4891
// RuntimeId: 16695
// TypeInfo: 0x0000000144F50BC0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaTeamInfo : public Core::DataContainer {
        Int32 TeamId; // 0x18
        char pad_0x1C[0x4];
        CString FactionId; // 0x20
        CString FactionNameSID; // 0x28
        CString FactionName; // 0x30
        CString TextureName; // 0x38
        Float32 Score; // 0x40
        char pad_0x44[0x4];
    }; // 0x48
    static_assert(sizeof(SpartaTeamInfo) == 0x48);
}
#pragma pack(pop)