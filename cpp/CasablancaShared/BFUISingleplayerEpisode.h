// Object: BFUISingleplayerEpisode
// ClassId: 182
// RuntimeId: 2282
// TypeInfo: 0x0000000144D43CD0
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUISingleplayerChapter.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerEpisode : public Core::Asset {
        CString EpisodeName; // 0x20
        CString EpisodeDescription; // 0x28
        CString EpisodeShortDescription; // 0x30
        Array<CasablancaShared::BFUISingleplayerChapter> Chapters; // 0x38
        CString TexturePath; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUISingleplayerEpisode) == 0x48);
}
#pragma pack(pop)