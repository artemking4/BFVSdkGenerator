// Object: BFClientSettings
// ClassId: 4960
// RuntimeId: 62535
// TypeInfo: 0x0000000144D4CAF0
#include "../Core/SystemSettings.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFClientSettings : public Core::SystemSettings {
        GameShared::TeamId JoinAsTeamId; // 0x20
        GameShared::SquadId JoinAsSquadId; // 0x24
        CString PlayerName; // 0x28
        CString ExemptExperiences; // 0x30
        CString ExemptLevels; // 0x38
        Int32 EventSelectedSoldier; // 0x40
        Int32 RagdollLODSignificance; // 0x44
        Boolean JoinAsSquadLeader; // 0x48
        Boolean JoinAsCommander; // 0x49
        Boolean ProgressionDebug; // 0x4A
        Boolean ShowDakarUI; // 0x4B
        Boolean DisableRagdollAnimatableOnSettle; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(BFClientSettings) == 0x50);
}
#pragma pack(pop)