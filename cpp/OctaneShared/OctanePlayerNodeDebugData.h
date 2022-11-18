// Object: OctanePlayerNodeDebugData
// ClassId: 4382
// RuntimeId: 34408
// TypeInfo: 0x0000000144EFD4D0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace OctaneShared {
    class OctanePlayerNodeDebugData : public Core::DataContainer {
        Boolean MuteSampler; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(OctanePlayerNodeDebugData) == 0x20);
}
#pragma pack(pop)