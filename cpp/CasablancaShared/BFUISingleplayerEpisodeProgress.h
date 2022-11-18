// Object: BFUISingleplayerEpisodeProgress
// ClassId: 1244
// RuntimeId: 38675
// TypeInfo: 0x0000000144D43BD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISingleplayerChapterProgress.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerEpisodeProgress : public Core::DataContainer {
        CString EpisodeName; // 0x18
        Int32 EpisodeIndex; // 0x20
        char pad_0x24[0x4];
        CString TexturePath; // 0x28
        Array<CasablancaShared::BFUISingleplayerChapterProgress> ChapterProgress; // 0x30
        Boolean Completed; // 0x38
        Boolean OnLastCheckPoint; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFUISingleplayerEpisodeProgress) == 0x40);
}
#pragma pack(pop)