// Object: SynchedFadeData
// ClassId: 4332
// RuntimeId: 37641
// TypeInfo: 0x0000000144E1D740
#include "../Audio/MusicFadeData.h"
#include "../Audio/MusicSyncType.h"

#pragma pack(push, 8)
namespace Audio {
    class SynchedFadeData : public Audio::MusicFadeData {
        Audio::MusicSyncType SyncType; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(SynchedFadeData) == 0x38);
}
#pragma pack(pop)