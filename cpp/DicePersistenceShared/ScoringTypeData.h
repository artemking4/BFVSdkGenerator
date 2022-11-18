// Object: ScoringTypeData
// ClassId: 5255
// RuntimeId: 56880
// TypeInfo: 0x0000000144DCA540
#include "../DicePersistenceShared/AbstractScoringTypeData.h"
#include "../DicePersistenceShared/StatAxiom.h"
#include "../DicePersistenceShared/StatParameterOperator.h"
#include "../Global/Float32.h"
#include "../DicePersistenceShared/StatEventData.h"
#include "../Global/CString.h"
#include "../GameShared/ScoringVisibilityType.h"
#include "../Global/Boolean.h"
#include "../DicePersistenceShared/PersistenceActivationCondition.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class ScoringTypeData : public DicePersistenceShared::AbstractScoringTypeData {
        Array<DicePersistenceShared::StatAxiom> Axioms; // 0x18
        DicePersistenceShared::StatParameterOperator OutputValuesOperator; // 0x20
        Float32 Limit; // 0x24
        Array<DicePersistenceShared::StatEventData> ScoringStatEvents; // 0x28
        CString DescriptionSid; // 0x30
        GameShared::ScoringVisibilityType VisibilityType; // 0x38
        Float32 Score; // 0x3C
        Float32 AdditionalValueMultiplier; // 0x40
        char pad_0x44[0x4];
        DicePersistenceShared::PersistenceActivationCondition ActivationCondition; // 0x48
        Boolean ShowForTeam; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(ScoringTypeData) == 0x58);
}
#pragma pack(pop)