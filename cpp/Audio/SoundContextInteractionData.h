// Object: SoundContextInteractionData
// ClassId: 4666
// RuntimeId: 6212
// TypeInfo: 0x0000000144E15AC0
#include "../Core/DataContainer.h"
#include "../Audio/SoundContextData.h"
#include "../Audio/SoundContextInteractionMode.h"
#include "../Audio/SoundContextAccumulationData.h"
#include "../Audio/SoundContextBindingData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundContextInteractionData : public Core::DataContainer {
        Audio::SoundContextData Context; // 0x18
        Audio::SoundContextInteractionMode InteractionMode; // 0x20
        char pad_0x24[0x4];
        Audio::SoundContextAccumulationData Accumulation; // 0x28
        Array<Audio::SoundContextBindingData> Bindings; // 0x30
        Float32 RelevanceDecay; // 0x38
        Uint32 Priority; // 0x3C
        Boolean ExecuteAllBindings; // 0x40
        Boolean KeepLastValue; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(SoundContextInteractionData) == 0x48);
}
#pragma pack(pop)