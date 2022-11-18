// Object: WSFloatVariable
// ClassId: 5347
// RuntimeId: 3510
// TypeInfo: 0x0000000144CFACD0
#include "../CasablancaShared/WSVariable.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WSFloatVariable : public CasablancaShared::WSVariable {
        Float32 DefaultValue; // 0x30
        Float32 FadeLowThreshold; // 0x34
        Float32 FadeHighThreshold; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(WSFloatVariable) == 0x40);
}
#pragma pack(pop)