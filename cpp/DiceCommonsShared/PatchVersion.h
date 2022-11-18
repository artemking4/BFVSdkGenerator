// Object: PatchVersion
// ClassId: 614
// RuntimeId: 63866
// TypeInfo: 0x0000000144DB37C0
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PatchVersion : public Core::Asset {
        Array<CString> Release; // 0x20
    }; // 0x28
    static_assert(sizeof(PatchVersion) == 0x28);
}
#pragma pack(pop)