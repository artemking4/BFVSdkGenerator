// Object: IntChangedEventEntityData
// ClassId: 3058
// RuntimeId: 61923
// TypeInfo: 0x0000000144D12A00
#include "../CasablancaShared/PropertyChangedEventEntityBaseData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/IntChangedEventDescriptor.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class IntChangedEventEntityData : public CasablancaShared::PropertyChangedEventEntityBaseData {
        Int32 In; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::IntChangedEventDescriptor> EventDescriptors; // 0x30
    }; // 0x38
    static_assert(sizeof(IntChangedEventEntityData) == 0x38);
}
#pragma pack(pop)