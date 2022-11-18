// Object: BfCrosshairHudData
// ClassId: 4099
// RuntimeId: 33403
// TypeInfo: 0x0000000144D5AA60
#include "../GameShared/HudData.h"
#include "../Global/Float32.h"
#include "../GameShared/CrosshairTypeAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BfCrosshairHudData : public GameShared::HudData {
        Float32 CrosshairAngleMin; // 0x18
        Float32 CrosshairAngleMax; // 0x1C
        Float32 CrosshairScale; // 0x20
        char pad_0x24[0x4];
        GameShared::CrosshairTypeAsset CrosshairType; // 0x28
    }; // 0x30
    static_assert(sizeof(BfCrosshairHudData) == 0x30);
}
#pragma pack(pop)