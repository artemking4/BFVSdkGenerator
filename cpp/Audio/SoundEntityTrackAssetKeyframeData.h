// Object: SoundEntityTrackAssetKeyframeData
// ClassId: 5185
// RuntimeId: 33714
// TypeInfo: 0x0000000144E1E540
#include "../Audio/SoundEntityTrackKeyframeData.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundEntityTrackAssetKeyframeData : public Audio::SoundEntityTrackKeyframeData {
        Audio::SoundWaveAssetBase Asset; // 0x20
        Boolean TriggerDefaultStartEvent; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SoundEntityTrackAssetKeyframeData) == 0x30);
}
#pragma pack(pop)