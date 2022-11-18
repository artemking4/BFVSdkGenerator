// Object: SpartaOperationInfo
// ClassId: 4680
// RuntimeId: 17210
// TypeInfo: 0x0000000144D30F20
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpartaOperationInfo : public Core::DataContainer {
        Int32 OperationIndex; // 0x18
        Int32 CurrentScore; // 0x1C
        Int32 RequiredScore; // 0x20
        Boolean OperationCompleted; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(SpartaOperationInfo) == 0x28);
}
#pragma pack(pop)