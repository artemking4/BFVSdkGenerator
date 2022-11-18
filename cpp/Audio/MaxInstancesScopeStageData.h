// Object: MaxInstancesScopeStageData
// ClassId: 4675
// RuntimeId: 15916
// TypeInfo: 0x0000000144E017F0
#include "../Audio/SoundScopeStageData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class MaxInstancesScopeStageData : public Audio::SoundScopeStageData {
        Uint32 Count; // 0x18
        Boolean KeepOldest; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(MaxInstancesScopeStageData) == 0x20);
}
#pragma pack(pop)