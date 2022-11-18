// Object: SustainFiringSweepAreaSettings
// ClassId: 4955
// RuntimeId: 44245
// TypeInfo: 0x0000000144C06860
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SustainFiringSweepAreaSettings : public Core::DataContainer {
        Float32 SweepArcWidth; // 0x18
        Float32 MinimumSweepMovement; // 0x1C
        Float32 SweepRate; // 0x20
        Float32 PostSweepPauseDuration; // 0x24
        Boolean StartSweepFromEdgeOfArc; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SustainFiringSweepAreaSettings) == 0x30);
}
#pragma pack(pop)