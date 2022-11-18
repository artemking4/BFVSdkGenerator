// Object: SpecializationLink
// ClassId: 4898
// RuntimeId: 45348
// TypeInfo: 0x0000000144D50DD0
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpecializationLink : public Core::DataContainer {
        Int32 SourceIndex; // 0x18
        Int32 TargetIndex; // 0x1C
    }; // 0x20
    static_assert(sizeof(SpecializationLink) == 0x20);
}
#pragma pack(pop)