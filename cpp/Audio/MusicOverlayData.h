// Object: MusicOverlayData
// ClassId: 4338
// RuntimeId: 17981
// TypeInfo: 0x0000000144E1D4C0
#include "../Audio/MusicPlayableData.h"
#include "../Audio/MusicOverlayVariation.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicOverlayData : public Audio::MusicPlayableData {
        Array<Audio::MusicOverlayVariation> Variations; // 0x40
    }; // 0x48
    static_assert(sizeof(MusicOverlayData) == 0x48);
}
#pragma pack(pop)