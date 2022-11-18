// Object: LaserPainterData
// ClassId: 5210
// RuntimeId: 37268
// TypeInfo: 0x0000000144D3F8D0
#include "../CasablancaShared/LockingWeaponData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class LaserPainterData : public CasablancaShared::LockingWeaponData {
        Float32 TimeObjectIsPainted; // 0x48
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(LaserPainterData) == 0x50);
}
#pragma pack(pop)