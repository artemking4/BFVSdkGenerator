// Object: StaticUnlockList
// ClassId: 767
// RuntimeId: 29212
// TypeInfo: 0x0000000144D12B80
#include "../Core/Asset.h"
#include "../GameShared/BasicUnlockInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StaticUnlockList : public Core::Asset {
        Array<GameShared::BasicUnlockInfo> UnlockInfos; // 0x20
    }; // 0x28
    static_assert(sizeof(StaticUnlockList) == 0x28);
}
#pragma pack(pop)