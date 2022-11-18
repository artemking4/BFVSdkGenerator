// Object: BFUISingleplayerEpisodeProgressContainer
// ClassId: 1245
// RuntimeId: 28194
// TypeInfo: 0x0000000144D43B50
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUISingleplayerChapter.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISingleplayerEpisodeProgress.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerEpisodeProgressContainer : public Core::DataContainer {
        Int32 LastPlayedEpisodeIndex; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::BFUISingleplayerChapter LastPlayedChapter; // 0x20
        Int32 LastPlayedDifficulty; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::BFUISingleplayerEpisodeProgress> EpisodeProgress; // 0x30
        Boolean EpisodeCompleted; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUISingleplayerEpisodeProgressContainer) == 0x40);
}
#pragma pack(pop)