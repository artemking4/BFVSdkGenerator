// Object: HumanPlayerEntityData
// ClassId: 2797
// RuntimeId: 44769
// TypeInfo: 0x0000000144E77AC0
#include "../GameShared/HumanPlayerProxyEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class HumanPlayerEntityData : public GameShared::HumanPlayerProxyEntityData {
        Float32 PlayerKilledDelay; // 0x28
        Float32 PostReviveShortRespawnTime; // 0x2C
        Int32 MaxReviveCount; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(HumanPlayerEntityData) == 0x38);
}
#pragma pack(pop)