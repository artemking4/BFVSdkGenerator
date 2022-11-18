// Object: SpartaPlayerInfo
// ClassId: 4889
// RuntimeId: 37255
// TypeInfo: 0x0000000144F50B40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint64.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../SpartaShared/SpartaPlayerScore.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaPlayerInfo : public Core::DataContainer {
        Uint64 PersonaId; // 0x18
        Uint64 UserId; // 0x20
        CString Name; // 0x28
        CString PersonaName; // 0x30
        CString GroupId; // 0x38
        Int32 TeamId; // 0x40
        Int32 SquadId; // 0x44
        CString KitId; // 0x48
        CString RankIconUrl; // 0x50
        SpartaShared::SpartaPlayerScore Score; // 0x58
        Boolean IsAIPlayer; // 0x78
        Boolean IsSpectator; // 0x79
        Boolean IsSquadLeader; // 0x7A
        char pad_0x7B[0x5];
    }; // 0x80
    static_assert(sizeof(SpartaPlayerInfo) == 0x80);
}
#pragma pack(pop)