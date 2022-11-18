// Object: CasablancaSpartaSetSoldierGender
// ClassId: 4805
// RuntimeId: 31831
// TypeInfo: 0x0000000144C74130
#include "../SpartaShared/SpartaPayload.h"
#include "../CasablancaShared/BFSoldierGenderType.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaSetSoldierGender : public SpartaShared::SpartaPayload {
        CasablancaShared::BFSoldierGenderType Gender; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaSetSoldierGender) == 0x20);
}
#pragma pack(pop)