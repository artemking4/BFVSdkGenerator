// Object: WSVariable
// ClassId: 5345
// RuntimeId: 57671
// TypeInfo: 0x0000000144CFAD50
#include "../CasablancaShared/WSNodeBase.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSVariable : public CasablancaShared::WSNodeBase {
        Uint32 NameHash; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(WSVariable) == 0x30);
}
#pragma pack(pop)