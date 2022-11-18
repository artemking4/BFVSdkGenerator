// Object: MusicSelector
// ClassId: 4344
// RuntimeId: 10648
// TypeInfo: 0x0000000144E1D2C0
#include "../Audio/MusicSelectorBase.h"
#include "../Audio/MusicSelectorTriggerType.h"
#include "../Audio/MusicSyncType.h"
#include "../Audio/MusicStreamableData.h"
#include "../Audio/MusicTransition.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicSelector : public Audio::MusicSelectorBase {
        Audio::MusicSelectorTriggerType TriggerType; // 0x20
        Audio::MusicSyncType SyncType; // 0x24
        Audio::MusicStreamableData Target; // 0x28
        Audio::MusicTransition Default; // 0x30
        Array<Audio::MusicTransition> Transitions; // 0x38
    }; // 0x40
    static_assert(sizeof(MusicSelector) == 0x40);
}
#pragma pack(pop)