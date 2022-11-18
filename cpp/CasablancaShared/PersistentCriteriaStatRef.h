// Object: PersistentCriteriaStatRef
// ClassId: 86
// RuntimeId: 49036
// TypeInfo: 0x0000000144D49EF0
#include "../GameShared/AbstractPersistentStatRef.h"
#include "../CasablancaShared/CriteriaData.h"
#include "../DicePersistenceShared/StatCategoryData.h"
#include "../CasablancaShared/AwardData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PersistentCriteriaStatRef : public GameShared::AbstractPersistentStatRef {
        CasablancaShared::CriteriaData Criteria; // 0x18
        DicePersistenceShared::StatCategoryData ParamX; // 0x20
        DicePersistenceShared::StatCategoryData ParamY; // 0x28
        CasablancaShared::AwardData CriteriaOwner; // 0x30
    }; // 0x38
    static_assert(sizeof(PersistentCriteriaStatRef) == 0x38);
}
#pragma pack(pop)