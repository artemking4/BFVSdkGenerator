// Object: CharacterSocketListAsset
// ClassId: 208
// RuntimeId: 17421
// TypeInfo: 0x0000000144F39A10
#include "../Core/Asset.h"
#include "../SoldierShared/SocketData.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CharacterSocketListAsset : public Core::Asset {
        Array<SoldierShared::SocketData> GameplaySockets; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterSocketListAsset) == 0x28);
}
#pragma pack(pop)