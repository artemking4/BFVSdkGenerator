// Object: UIDamageReportEntry
// ClassId: 5386
// RuntimeId: 8980
// TypeInfo: 0x0000000144D221F0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIDamageReportEntry : public Core::DataContainer {
        Uint32 PlayerNameHash; // 0x18
        Uint32 WeaponUnlockHash; // 0x1C
        Float32 Amount; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject PlayerObject; // 0x28
        CString WeaponIcon; // 0x30
    }; // 0x38
    static_assert(sizeof(UIDamageReportEntry) == 0x38);
}
#pragma pack(pop)