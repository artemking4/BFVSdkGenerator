// Object: CasablancaSpartaEadpStatCategoriesResponseMessage
// ClassId: 4777
// RuntimeId: 21154
// TypeInfo: 0x0000000144C71920
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/CasablancaSpartaEadpStatCategoriesData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaEadpStatCategoriesResponseMessage : public SpartaShared::SpartaPayload {
        Casablanca::CasablancaSpartaEadpStatCategoriesData EadpCategories; // 0x18
        Boolean DataReady; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(CasablancaSpartaEadpStatCategoriesResponseMessage) == 0x48);
}
#pragma pack(pop)