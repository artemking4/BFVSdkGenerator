// Object: CasablancaSpartaShowEquipAnimationResult
// ClassId: 4807
// RuntimeId: 40316
// TypeInfo: 0x0000000144C741B0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaShowEquipAnimationResult : public SpartaShared::SpartaPayload {
        Boolean Result; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaShowEquipAnimationResult) == 0x20);
}
#pragma pack(pop)