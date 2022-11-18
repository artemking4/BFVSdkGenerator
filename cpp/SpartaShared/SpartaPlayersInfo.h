// Object: SpartaPlayersInfo
// ClassId: 4890
// RuntimeId: 56118
// TypeInfo: 0x0000000144F50AC0
#include "../Core/DataContainer.h"
#include "../SpartaShared/SpartaPlayerInfo.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaPlayersInfo : public Core::DataContainer {
        Array<SpartaShared::SpartaPlayerInfo> Players; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaPlayersInfo) == 0x20);
}
#pragma pack(pop)