// Object: UICombatAreaAsset
// ClassId: 870
// RuntimeId: 44327
// TypeInfo: 0x0000000144E6C950
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class UICombatAreaAsset : public Core::Asset {
        CString Prefix; // 0x20
    }; // 0x28
    static_assert(sizeof(UICombatAreaAsset) == 0x28);
}
#pragma pack(pop)