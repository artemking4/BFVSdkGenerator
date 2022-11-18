// Object: AimedAtByTargetAffector
// ClassId: 100
// RuntimeId: 60404
// TypeInfo: 0x0000000144C13280
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AimedAtByTargetAffector : public Core::DataContainer {
        Float32 DecreaseAmountPerSecondMin; // 0x18
        Float32 DecreaseAmountPerSecondMax; // 0x1C
        Float32 AimedAtAngleThreshold; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AimedAtByTargetAffector) == 0x28);
}
#pragma pack(pop)