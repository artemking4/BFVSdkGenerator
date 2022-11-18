// Object: SoundWaveVariation
// ClassId: 4679
// RuntimeId: 13848
// TypeInfo: 0x0000000144E15840
#include "../Core/DataContainer.h"
#include "../Audio/SoundWaveSubtitle.h"
#include "../Global/Uint8.h"
#include "../Audio/SoundWaveVariationSegment.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundWaveVariation : public Core::DataContainer {
        Array<Audio::SoundWaveSubtitle> Subtitles; // 0x18
        Array<Audio::SoundWaveVariationSegment> Segments; // 0x20
        Uint32 PersistentDataSize; // 0x28
        Uint8 Weight; // 0x2C
        Uint8 ChunkIndex; // 0x2D
        Uint8 FirstLoopSegmentIndex; // 0x2E
        Uint8 LastLoopSegmentIndex; // 0x2F
    }; // 0x30
    static_assert(sizeof(SoundWaveVariation) == 0x30);
}
#pragma pack(pop)