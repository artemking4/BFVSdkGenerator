// Object: UIInputActionDataAsset
// ClassId: 886
// RuntimeId: 56730
// TypeInfo: 0x0000000144E6BD50
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../GameShared/UIInputActionMapData.h"
#include "../GameShared/UIAnalogInputMapData.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIInputActionDataAsset : public Core::Asset {
        Float32 DefaultRepeatDelaySec; // 0x20
        Float32 DefaultRepeatSpeedSec; // 0x24
        Float32 DefaultOneAxisDeadZone; // 0x28
        Float32 DefaultTwoAxisDeadZone; // 0x2C
        Array<GameShared::UIInputActionMapData> InputActionMaps; // 0x30
        Array<GameShared::UIAnalogInputMapData> AnalogInputMaps; // 0x38
    }; // 0x40
    static_assert(sizeof(UIInputActionDataAsset) == 0x40);
}
#pragma pack(pop)