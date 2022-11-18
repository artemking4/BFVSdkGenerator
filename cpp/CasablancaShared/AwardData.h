// Object: AwardData
// ClassId: 5241
// RuntimeId: 5550
// TypeInfo: 0x0000000144D6C630
#include "../CasablancaShared/AbstractAwardData.h"
#include "../CasablancaShared/AwardGroup.h"
#include "../CasablancaShared/AwardCategory.h"
#include "../Global/CString.h"
#include "../CasablancaShared/AwardScoring.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/CriteriaData.h"
#include "../CasablancaShared/AwardType.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/CriteriaAward.h"
#include "../CasablancaShared/CatalogRarityType.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../DicePersistenceShared/PersistenceActivationCondition.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardData : public CasablancaShared::AbstractAwardData {
        CasablancaShared::AwardGroup Group; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::AwardCategory Category; // 0x20
        CString Code; // 0x28
        Array<CasablancaShared::AwardScoring> Scorings; // 0x30
        Float32 CriteriaCompletionRequirement; // 0x38
        Int32 MinimumRequiredCriteria; // 0x3C
        Array<CasablancaShared::CriteriaData> Criteria; // 0x40
        CasablancaShared::AwardType Repeat; // 0x48
        Uint32 MaxRepetitions; // 0x4C
        Float32 DependenciesCompletionRequirement; // 0x50
        Int32 MinimumRequiredDependencies; // 0x54
        Array<CasablancaShared::CriteriaAward> Dependencies; // 0x58
        CString NameSid; // 0x60
        CString Description; // 0x68
        CasablancaShared::CatalogRarityType Rarity; // 0x70
        char pad_0x74[0x4];
        CString ImageName; // 0x78
        GameShared::UnlockAssetBase Object; // 0x80
        DicePersistenceShared::PersistenceActivationCondition ActivationCondition; // 0x88
        Boolean DeactivateOnGained; // 0x90
        Boolean Visible; // 0x91
        Boolean CriteriaVisibleWithoutLicense; // 0x92
        char pad_0x93[0x5];
    }; // 0x98
    static_assert(sizeof(AwardData) == 0x98);
}
#pragma pack(pop)