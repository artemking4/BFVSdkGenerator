// Object: SoundScopeAggregateData
// ClassId: 4669
// RuntimeId: 39978
// TypeInfo: 0x0000000144E019F0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundScopeStrategyData.h"
#include "../Global/Uint32.h"
#include "../Audio/SoundScopeAggregateInputData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundScopeAggregateData : public Core::DataContainer {
        CString Name; // 0x18
        Audio::SoundScopeStrategyData Strategy; // 0x20
        Uint32 MaxInputCount; // 0x28
        char pad_0x2C[0x4];
        Array<Audio::SoundScopeAggregateInputData> Inputs; // 0x30
    }; // 0x38
    static_assert(sizeof(SoundScopeAggregateData) == 0x38);
}
#pragma pack(pop)