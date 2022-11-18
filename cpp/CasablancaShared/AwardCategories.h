// Object: AwardCategories
// ClassId: 157
// RuntimeId: 23543
// TypeInfo: 0x0000000144D6C830
#include "../Core/Asset.h"
#include "../CasablancaShared/AwardCategory.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AwardCategories : public Core::Asset {
        Array<CasablancaShared::AwardCategory> Categories; // 0x20
    }; // 0x28
    static_assert(sizeof(AwardCategories) == 0x28);
}
#pragma pack(pop)