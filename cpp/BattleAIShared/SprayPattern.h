// Object: SprayPattern
// ClassId: 4902
// RuntimeId: 64091
// TypeInfo: 0x0000000144C06E60
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SprayPattern : public Core::DataContainer {
        Float32 AreaHeight; // 0x18
        Float32 SweepTimePitch; // 0x1C
        Float32 AreaWidth; // 0x20
        Float32 SweepTimeYaw; // 0x24
    }; // 0x28
    static_assert(sizeof(SprayPattern) == 0x28);
}
#pragma pack(pop)