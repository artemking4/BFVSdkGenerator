// Object: RimeScreenData
// ClassId: 712
// RuntimeId: 30664
// TypeInfo: 0x0000000144F27890
#include "../Core/Asset.h"
#include "../RimeShared/RimeStateStreamLaneType.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../RimeShared/RimeScreenSamplerSettings.h"

#pragma pack(push, 8)
namespace RimeShared {
    class RimeScreenData : public Core::Asset {
        RimeShared::RimeStateStreamLaneType StateStreamLane; // 0x20
        Float32 FieldOfView; // 0x24
        Float32 ScreenLayoutWidth; // 0x28
        Float32 ScreenLayoutHeight; // 0x2C
        RimeShared::RimeScreenSamplerSettings ScreenSamplerSettings; // 0x30
        Boolean ScaleUpAndKeepAspectRatio; // 0x40
        Boolean LayoutWithSafeZone; // 0x41
        Boolean IgnoreGlobalFade; // 0x42
        char pad_0x43[0x5];
    }; // 0x48
    static_assert(sizeof(RimeScreenData) == 0x48);
}
#pragma pack(pop)