// Object: VersionData
// ClassId: 906
// RuntimeId: 52175
// TypeInfo: 0x0000000144E9AD90
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class VersionData : public Core::Asset {
        CString disclaimer; // 0x20
        Int32 Version; // 0x28
        char pad_0x2C[0x4];
        CString DateTime; // 0x30
        CString BranchId; // 0x38
        CString DataBranchId; // 0x40
        CString DataPerforcePath; // 0x48
        CString DataPerforceCL; // 0x50
        CString GameName; // 0x58
    }; // 0x60
    static_assert(sizeof(VersionData) == 0x60);
}
#pragma pack(pop)