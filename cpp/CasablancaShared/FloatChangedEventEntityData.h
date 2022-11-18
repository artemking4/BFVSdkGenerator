// Object: FloatChangedEventEntityData
// ClassId: 3057
// RuntimeId: 31780
// TypeInfo: 0x0000000144D12900
#include "../CasablancaShared/PropertyChangedEventEntityBaseData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/FloatChangedEventDescriptor.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FloatChangedEventEntityData : public CasablancaShared::PropertyChangedEventEntityBaseData {
        Float32 In; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::FloatChangedEventDescriptor> EventDescriptors; // 0x30
    }; // 0x38
    static_assert(sizeof(FloatChangedEventEntityData) == 0x38);
}
#pragma pack(pop)