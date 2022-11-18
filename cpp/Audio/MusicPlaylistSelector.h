// Object: MusicPlaylistSelector
// ClassId: 4342
// RuntimeId: 49420
// TypeInfo: 0x0000000144E1CFC0
#include "../Core/DataContainer.h"
#include "../Audio/MusicEventData.h"
#include "../Audio/MusicAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPlaylistSelector : public Core::DataContainer {
        Audio::MusicEventData Event; // 0x18
        Audio::MusicAsset Target; // 0x20
        Audio::MusicEventData TriggerOnTarget; // 0x28
    }; // 0x30
    static_assert(sizeof(MusicPlaylistSelector) == 0x30);
}
#pragma pack(pop)