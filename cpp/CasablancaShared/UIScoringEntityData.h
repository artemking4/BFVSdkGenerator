// Object: UIScoringEntityData
// ClassId: 3756
// RuntimeId: 23073
// TypeInfo: 0x0000000144D43F50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScoringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 MinDisplayTime; // 0x24
        Float32 MinorEventDelay; // 0x28
        Float32 MaxDisplayTime; // 0x2C
        Float32 MajorEventDelay; // 0x30
        char pad_0x34[0x4];
        CString ScoreKilledSid; // 0x38
        Float32 AggregateTime; // 0x40
        Boolean TreatSameTypeAsIndividual; // 0x44
        Boolean AggregateMinorEvents; // 0x45
        char pad_0x46[0x2];
    }; // 0x48
    static_assert(sizeof(UIScoringEntityData) == 0x48);
}
#pragma pack(pop)