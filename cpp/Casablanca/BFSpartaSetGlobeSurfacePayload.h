// Object: BFSpartaSetGlobeSurfacePayload
// ClassId: 4730
// RuntimeId: 28453
// TypeInfo: 0x0000000144C71720
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaSetGlobeSurfacePayload : public SpartaShared::SpartaPayload {
        CString SurfId; // 0x18
        CString Glow; // 0x20
        Float32 Radius; // 0x28
        Float32 FadeDistance; // 0x2C
        Boolean Enable; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFSpartaSetGlobeSurfacePayload) == 0x38);
}
#pragma pack(pop)