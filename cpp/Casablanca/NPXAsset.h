// Object: NPXAsset
// ClassId: 590
// RuntimeId: 26740
// TypeInfo: 0x0000000144C7F700
#include "../Core/Asset.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class NPXAsset : public Core::Asset {
        CString Title; // 0x20
        CString Body; // 0x28
        CString ImageId; // 0x30
        Int32 NrOfTimesToShow; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(NPXAsset) == 0x40);
}
#pragma pack(pop)