// Object: ScoreboardSyncSystemAsset
// ClassId: 718
// RuntimeId: 31665
// TypeInfo: 0x0000000144D9FF60
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoreboardSyncSystemAsset : public Core::Asset {
        CString RankStatCode; // 0x20
        CString RoundscoreStatCode; // 0x28
        CString KillsStatCode; // 0x30
        CString DeathsStatCode; // 0x38
        CString HeadshotsStatCode; // 0x40
        CString RevivesStatCode; // 0x48
        CString TimesRevivedStatCode; // 0x50
        CString ResuppliesStatCode; // 0x58
        CString PrisonerOfWarStatCode; // 0x60
        CString AssistsStatCode; // 0x68
        CString RawKillsStatCode; // 0x70
        CString CoopKillsStatCode; // 0x78
        CString CoopDeathsStatCode; // 0x80
        CString CoopHeadshotsStatCode; // 0x88
        CString CoopRevivesStatCode; // 0x90
        CString CoopTimesRevivedStatCode; // 0x98
        CString CoopResuppliesStatCode; // 0xA0
    }; // 0xA8
    static_assert(sizeof(ScoreboardSyncSystemAsset) == 0xA8);
}
#pragma pack(pop)