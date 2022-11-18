// Object: BoolChangedEventEntityData
// ClassId: 3056
// RuntimeId: 6682
// TypeInfo: 0x0000000144D12980
#include "../CasablancaShared/PropertyChangedEventEntityBaseData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BoolChangedEventDescriptor.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BoolChangedEventEntityData : public CasablancaShared::PropertyChangedEventEntityBaseData {
        Array<CasablancaShared::BoolChangedEventDescriptor> EventDescriptors; // 0x28
        Boolean In; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BoolChangedEventEntityData) == 0x38);
}
#pragma pack(pop)