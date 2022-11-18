// Object: PrivateGamesPlayground
// ClassId: 4470
// RuntimeId: 30448
// TypeInfo: 0x0000000144D6DD30
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint64.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/MapRotation.h"
#include "../CasablancaShared/Mutator.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesPlayground : public Core::DataContainer {
        Uint64 OwnerId; // 0x18
        CString PlaygroundId; // 0x20
        CString BlueprintType; // 0x28
        CString Checksum; // 0x30
        Int32 State; // 0x38
        char pad_0x3C[0x4];
        CString Name; // 0x40
        CString Description; // 0x48
        CString ServerName; // 0x50
        CString ServerDescription; // 0x58
        CString Password; // 0x60
        CString NewPassword; // 0x68
        CasablancaShared::MapRotation MapRotation; // 0x70
        Array<CasablancaShared::Mutator> Mutators; // 0x78
        Boolean PasswordChanged; // 0x80
        Boolean Validated; // 0x81
        char pad_0x82[0x6];
    }; // 0x88
    static_assert(sizeof(PrivateGamesPlayground) == 0x88);
}
#pragma pack(pop)