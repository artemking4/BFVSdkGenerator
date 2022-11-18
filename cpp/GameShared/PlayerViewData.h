// Object: PlayerViewData
// ClassId: 4443
// RuntimeId: 10445
// TypeInfo: 0x0000000144E756C0
#include "../Core/DataContainer.h"
#include "../GameShared/SubViewData.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayerViewData : public Core::DataContainer {
        Array<GameShared::SubViewData> SubViews; // 0x18
    }; // 0x20
    static_assert(sizeof(PlayerViewData) == 0x20);
}
#pragma pack(pop)