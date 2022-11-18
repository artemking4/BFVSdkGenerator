// Object: SoundScopeStrategyData
// ClassId: 4677
// RuntimeId: 63018
// TypeInfo: 0x0000000144E018F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundScopeStageData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundScopeStrategyData : public Core::DataContainer {
        CString Name; // 0x18
        Array<Audio::SoundScopeStageData> Stages; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundScopeStrategyData) == 0x28);
}
#pragma pack(pop)