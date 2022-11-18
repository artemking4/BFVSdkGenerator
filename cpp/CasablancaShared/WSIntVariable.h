// Object: WSIntVariable
// ClassId: 5348
// RuntimeId: 54195
// TypeInfo: 0x0000000144CFAC50
#include "../CasablancaShared/WSVariable.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSIntVariable : public CasablancaShared::WSVariable {
        Int32 DefaultValue; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(WSIntVariable) == 0x38);
}
#pragma pack(pop)