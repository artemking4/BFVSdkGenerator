// Object: SoundMasterPatchAsset
// ClassId: 746
// RuntimeId: 1353
// TypeInfo: 0x0000000144E166C0
#include "../Audio/SoundBusPatchBaseAsset.h"
#include "../Audio/SoundBusData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundMasterPatchAsset : public Audio::SoundBusPatchBaseAsset {
        Audio::SoundBusData RwMovieBus; // 0x30
    }; // 0x38
    static_assert(sizeof(SoundMasterPatchAsset) == 0x38);
}
#pragma pack(pop)