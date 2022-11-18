// Object: BFUIProfileOptionColorEntityData
// ClassId: 2355
// RuntimeId: 63400
// TypeInfo: 0x0000000144D87DA0
#include "../CasablancaShared/BFUIProfileOptionEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionColorEntityData : public CasablancaShared::BFUIProfileOptionEntityData {
        Float32 InR; // 0x30
        Float32 InG; // 0x34
        Float32 InB; // 0x38
        Float32 InA; // 0x3C
        Float32 InH; // 0x40
        Float32 InS; // 0x44
        Float32 InL; // 0x48
        Boolean UseRGBIn; // 0x4C
        Boolean AlphaInOutputString; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(BFUIProfileOptionColorEntityData) == 0x50);
}
#pragma pack(pop)