// Object: WSPackage
// ClassId: 5343
// RuntimeId: 6003
// TypeInfo: 0x0000000144CFAE50
#include "../CasablancaShared/WSNodeBase.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/WSPackageMember.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSPackage : public CasablancaShared::WSNodeBase {
        Float32 Weight; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::WSPackageMember> WeatherStates; // 0x30
    }; // 0x38
    static_assert(sizeof(WSPackage) == 0x38);
}
#pragma pack(pop)