// Object: AISpawnData
// ClassId: 1614
// RuntimeId: 57620
// TypeInfo: 0x0000000144C13400
#include "../GameShared/ExtraSpawnData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISpawnData : public GameShared::ExtraSpawnData {
        Float32 DespawnDistance; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(AISpawnData) == 0x20);
}
#pragma pack(pop)