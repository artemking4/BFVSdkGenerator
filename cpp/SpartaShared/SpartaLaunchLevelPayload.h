// Object: SpartaLaunchLevelPayload
// ClassId: 4828
// RuntimeId: 39574
// TypeInfo: 0x0000000144F50440
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaLaunchLevelPayload : public SpartaShared::SpartaPayload {
        CString LevelName; // 0x18
        CString InclusionSettings; // 0x20
        Boolean IsLocalHost; // 0x28
        Boolean IsCoop; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(SpartaLaunchLevelPayload) == 0x30);
}
#pragma pack(pop)