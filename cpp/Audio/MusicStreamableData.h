// Object: MusicStreamableData
// ClassId: 4339
// RuntimeId: 48991
// TypeInfo: 0x0000000144E1D8C0
#include "../Audio/MusicPlayableData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Audio/MusicStreamableData.h"
#include "../Audio/MusicOverlayData.h"
#include "../Audio/MusicMetadataBase.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicStreamableData : public Audio::MusicPlayableData {
        Float32 RangeValue; // 0x40
        Int32 Weight; // 0x44
        Audio::MusicStreamableData NextPlayable; // 0x48
        Audio::MusicOverlayData OnNextPlayableOverlay; // 0x50
        Float32 NextPlayableFadeInTime; // 0x58
        char pad_0x5C[0x4];
        Audio::MusicMetadataBase Metadata; // 0x60
        Boolean AllowRangeFade; // 0x68
        Boolean RestartIfAlreadyPlaying; // 0x69
        char pad_0x6A[0x6];
    }; // 0x70
    static_assert(sizeof(MusicStreamableData) == 0x70);
}
#pragma pack(pop)