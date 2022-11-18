// Object: BfCompassHudData
// ClassId: 4098
// RuntimeId: 58938
// TypeInfo: 0x0000000144D5AAE0
#include "../GameShared/HudData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BfCompassHudData : public GameShared::HudData {
        Boolean UseRenderTarget; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BfCompassHudData) == 0x20);
}
#pragma pack(pop)