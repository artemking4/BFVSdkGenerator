// Object: DistanceScopeStageData
// ClassId: 4673
// RuntimeId: 6621
// TypeInfo: 0x0000000144DB6890
#include "../Audio/SoundScopeStageData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class DistanceScopeStageData : public Audio::SoundScopeStageData {
        Float32 Distance; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(DistanceScopeStageData) == 0x20);
}
#pragma pack(pop)