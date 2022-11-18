// Object: TournamentStatsReport
// ClassId: 811
// RuntimeId: 7754
// TypeInfo: 0x0000000144D22770
#include "../Core/Asset.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TournamentStatsReport : public Core::Asset {
        CString KillStatCode; // 0x20
        CString DeathStatCode; // 0x28
    }; // 0x30
    static_assert(sizeof(TournamentStatsReport) == 0x30);
}
#pragma pack(pop)