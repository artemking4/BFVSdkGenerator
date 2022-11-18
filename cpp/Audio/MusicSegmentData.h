// Object: MusicSegmentData
// ClassId: 4341
// RuntimeId: 54486
// TypeInfo: 0x0000000144E1D5C0
#include "../Audio/MusicStreamableData.h"
#include "../Audio/SoundWaveAssetBase.h"
#include "../Audio/MultitrackData.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicSegmentData : public Audio::MusicStreamableData {
        Audio::SoundWaveAssetBase Wave; // 0x70
        Audio::MultitrackData MultitrackLayers; // 0x78
    }; // 0x80
    static_assert(sizeof(MusicSegmentData) == 0x80);
}
#pragma pack(pop)