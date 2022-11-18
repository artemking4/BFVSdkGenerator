// Object: WSVariableCategory
// ClassId: 5349
// RuntimeId: 24920
// TypeInfo: 0x0000000144CFADD0
#include "../CasablancaShared/WSNodeBase.h"
#include "../CasablancaShared/WSVariable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSVariableCategory : public CasablancaShared::WSNodeBase {
        Array<CasablancaShared::WSVariable> Variables; // 0x28
    }; // 0x30
    static_assert(sizeof(WSVariableCategory) == 0x30);
}
#pragma pack(pop)