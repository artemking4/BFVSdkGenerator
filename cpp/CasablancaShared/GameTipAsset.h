// Object: GameTipAsset
// ClassId: 519
// RuntimeId: 57349
// TypeInfo: 0x0000000144D2B020
#include "../Core/Asset.h"
#include "../CasablancaShared/GameTipData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GameTipAsset : public Core::Asset {
        Array<CasablancaShared::GameTipData> Tips; // 0x20
    }; // 0x28
    static_assert(sizeof(GameTipAsset) == 0x28);
}
#pragma pack(pop)