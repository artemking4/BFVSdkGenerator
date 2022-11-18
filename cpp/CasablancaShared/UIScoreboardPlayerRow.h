// Object: UIScoreboardPlayerRow
// ClassId: 5519
// RuntimeId: 34442
// TypeInfo: 0x0000000144D44350
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScoreboardPlayerRow : public Core::DataContainer {
        CString Name; // 0x18
        CString KitIcon; // 0x20
        CString KitThumbnailIcon; // 0x28
        Int32 Rank; // 0x30
        Int32 Score; // 0x34
        Int32 Kills; // 0x38
        Int32 Assists; // 0x3C
        Int32 Deaths; // 0x40
        Int32 Ping; // 0x44
        Int32 RowNumber; // 0x48
        char pad_0x4C[0x4];
        CasablancaShared::BFUIPlayerObject Player; // 0x50
        Int32 Headshots; // 0x58
        Int32 Revives; // 0x5C
        Int32 TimesRevived; // 0x60
        Int32 Resupplies; // 0x64
        Int32 PrisonerOfWar; // 0x68
        Int32 CoopKills; // 0x6C
        Int32 CoopDeaths; // 0x70
        Int32 CoopHeadshots; // 0x74
        Int32 CoopRevives; // 0x78
        Int32 CoopTimesRevived; // 0x7C
        Int32 CoopResupplies; // 0x80
        Boolean IsLocalPlayer; // 0x84
        Boolean IsSquadLeader; // 0x85
        Boolean IsInLocalPlayerSquad; // 0x86
        Boolean IsCommander; // 0x87
        Boolean IsAlive; // 0x88
        Boolean IsManDown; // 0x89
        Boolean IsSpawnedIn; // 0x8A
        Boolean IsFreemium; // 0x8B
        Boolean VoipIsEnabled; // 0x8C
        Boolean VoipIsMuted; // 0x8D
        Boolean VoipIsSpeaking; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(UIScoreboardPlayerRow) == 0x90);
}
#pragma pack(pop)