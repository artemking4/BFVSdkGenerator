// Object: ScoreEvent
// ClassId: 4582
// RuntimeId: 27087
// TypeInfo: 0x0000000144D44050
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../UIIncubatorShared/LocalizedStringId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ScoreEvent : public Core::DataContainer {
        Int32 ScoreAmount; // 0x18
        Float32 RawScoreAmount; // 0x1C
        CString VictimName; // 0x20
        CString VictimKitTextureId; // 0x28
        CString DescriptionSid; // 0x30
        Int32 VisibilityType; // 0x38
        char pad_0x3C[0x4];
        UIIncubatorShared::LocalizedStringId WeaponNameSid; // 0x40
        CString WeaponIcon; // 0x48
        Int32 ScoringUIIndex; // 0x50
        Int32 NumOfSquadMembers; // 0x54
        CString BoostedByPlayerName; // 0x58
        Float32 RemainingDisplayTime; // 0x60
        Int32 ScoreTypeHash; // 0x64
        Boolean IsAggregate; // 0x68
        Boolean IsBoosted; // 0x69
        char pad_0x6A[0x6];
    }; // 0x70
    static_assert(sizeof(ScoreEvent) == 0x70);
}
#pragma pack(pop)