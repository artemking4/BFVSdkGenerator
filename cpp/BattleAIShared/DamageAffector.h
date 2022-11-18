// Object: DamageAffector
// ClassId: 1493
// RuntimeId: 58127
// TypeInfo: 0x0000000144C11E80
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DamageAffector : public Core::DataContainer {
        Float32 PercentOfDamageTaken; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(DamageAffector) == 0x20);
}
#pragma pack(pop)