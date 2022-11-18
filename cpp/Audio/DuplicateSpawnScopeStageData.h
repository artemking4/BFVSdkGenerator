// Object: DuplicateSpawnScopeStageData
// ClassId: 4674
// RuntimeId: 42671
// TypeInfo: 0x0000000144E01770
#include "../Audio/SoundScopeStageData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class DuplicateSpawnScopeStageData : public Audio::SoundScopeStageData {
        Float32 Time; // 0x18
        Float32 Distance; // 0x1C
        Uint32 ClosestCount; // 0x20
        Boolean GroupTypes; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(DuplicateSpawnScopeStageData) == 0x28);
}
#pragma pack(pop)