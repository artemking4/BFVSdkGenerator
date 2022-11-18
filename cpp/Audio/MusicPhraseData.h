// Object: MusicPhraseData
// ClassId: 4340
// RuntimeId: 39515
// TypeInfo: 0x0000000144E1D540
#include "../Audio/MusicStreamableData.h"
#include "../Audio/MusicPhraseSelectionType.h"
#include "../Audio/MusicParameterData.h"
#include "../Audio/SynchedFadeData.h"

#pragma pack(push, 8)
namespace Audio {
    class MusicPhraseData : public Audio::MusicStreamableData {
        Audio::MusicPhraseSelectionType SelectionType; // 0x70
        char pad_0x74[0x4];
        Audio::MusicParameterData SelectionParameter; // 0x78
        Audio::SynchedFadeData RangeFade; // 0x80
        Array<Audio::MusicStreamableData> Playables; // 0x88
    }; // 0x90
    static_assert(sizeof(MusicPhraseData) == 0x90);
}
#pragma pack(pop)